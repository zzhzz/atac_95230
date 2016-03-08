/****************************************************************
*Copyright (c) 1993 Bell Communications Research, Inc. (Bellcore)
*
*Permission to use, copy, modify, and distribute this material
*for any purpose and without fee is hereby granted, provided
*that the above copyright notice and this permission notice
*appear in all copies, and that the name of Bellcore not be
*used in advertising or publicity pertaining to this
*material without the specific, prior written permission
*of an authorized representative of Bellcore.  BELLCORE
*MAKES NO REPRESENTATIONS ABOUT THE ACCURACY OR SUITABILITY
*OF THIS MATERIAL FOR ANY PURPOSE.  IT IS PROVIDED "AS IS",
*WITHOUT ANY EXPRESS OR IMPLIED WARRANTIES.
****************************************************************/
#ifdef MVS
#include <mvapts.h>
MODULEID(%M%,%J%/%D%/%T%)
#endif /* MVS */

static char alldu_c[] = 
	"$Header: /u/saul/atac/src/atac_i/RCS/alldu.c,v 3.3 94/04/04 10:11:40 jrh Exp $";
/*
*-----------------------------------------------$Log:	alldu.c,v $
* Revision 3.3  94/04/04  10:11:40  jrh
* Add Release Copyright
* 
* Revision 3.2  93/08/04  15:43:34  ewk
* Added MVS and solaris support.  Squelched some ANSI warnings.
* 
* Revision 3.1  93/07/12  09:43:25  saul
* MVS MODULEID
* Change bitvector.h bitvec.h for MVS
* 
* Revision 3.0  92/11/06  07:46:01  saul
* propagate to version 3.0
* 
* Revision 2.4  92/10/30  09:47:28  saul
* include portable.h
* 
* Revision 2.3  92/07/10  12:28:00  saul
* change in args to du_use_type
* 
* Revision 2.2  92/03/17  14:22:11  saul
* copyright
* 
* Revision 2.1  91/06/13  12:38:53  saul
* Propagate to version 2.0
* 
 * Revision 1.1  91/06/12  20:25:34  saul
 * Aug 1990 baseline
 * 
*-----------------------------------------------end of log
*/
#include <stdio.h>
#include "portable.h"
#include "sym.h"
#include "dug.h"
#include "bitvec.h"

/* forward declarations */
static void u_traverse();
static void paths_from();
void alldu();

#ifndef GIVE_UP
#define GIVE_UP	(10*1000*1000)
#endif

DU *du_use();
DU *du_use_type();

typedef struct definfo {
	DUG	*dug;			/* flow graph */
	BVPTR	*list;			/* list of nodes visited on path */
	BVPTR	*fruitless;		/* nodes that do not reach a use */
	BLOCK	*d_node;		/* defining node */
	SYM	*sym;			/* symbol being traced */
	int	star;			/* for DREF symbol */
} DEFINFO;

static unsigned long adu_count;

static DEFINFO definfo;

void
alldu(dug)
DUG	*dug;
{ 
	DUG	*t;
	BLOCK	*node;
	
	adu_count = 0;

	/*
	* Find DU paths from each node in flow graph.
	*/
	if (dug->block_list)
		for (t = NULL; list_next(dug->block_list, &t, &node);)
			paths_from(dug, node);

	fprintf(stderr, "%s blocks: %d\t\tAll_du_paths: %lu\n",
		dug->fname, dug->count, adu_count);
}

static void
paths_from(dug, node)
DUG	*dug;
BLOCK	*node;
{
	LIST	*i;
	LIST	*j;
	BLOCK	*f;
	DU	*du;

	/*
	* For each symbol defined at node
	* traverse graph down from node to find C-USEs and P-USEs.
	* U_traverse adds each node to v_list when it is visited. 
	*/
	definfo.dug = dug;
	definfo.d_node = node;
	for (i = NULL; du = du_use(dug, node, &i);) {
		if ((du->ref_type & VAR_DEF) == 0) continue;
		if (node->branches == NULL) continue;
		definfo.sym = (SYM *)(du->var_id + 1);
		definfo.star = du->ref_type & VAR_DREF;
		definfo.list = BVALLOC(dug->count);
		definfo.fruitless = BVALLOC(dug->count);
		for (j = NULL; list_next(node->branches, &j, &f);)
			u_traverse(f);
		free(definfo.list);
		free(definfo.fruitless);
	}
}

static void
u_traverse(node)
BLOCK	*node;			/* possible use node */
{
	int	i;
	int	f;
	DU	*du;
	int	prev_adu_count;

if (node->block_id == 0) return;
/*
* ?unknown? Block 0 is the start block.  But, branch back to block 0 means return.
* This should be a valid P-USE but the runtime won't catch it so we don't
* report it.  Since block 0 always has exactly one branch, to block 1,
* and block 1 is on the visited list, and there are never any Uses at block 0,
* we could just remove the line above this comment to have the "P-USE at
* return" print.
*/
	if (BVTEST(definfo.fruitless, node->block_id))
		return;					/* already visited */

	if (BVTEST(definfo.list, node->block_id))
		return;					/* already visited */

	if (adu_count >= GIVE_UP) return;

	prev_adu_count = adu_count;

	du = du_use_type(definfo.dug, node, definfo.sym, definfo.star);

	/*
	* If C-USE at node, count it.
	*/
	if (du->ref_type & VAR_CUSE)
		++adu_count;

	/*
	* If P-USE at node, count them with all following nodes.
	*/
	if ((du->ref_type & VAR_PUSE) && node->branches)
		for (i = 0; list_next(node->branches, &i, &f);)
			++adu_count;
	
	/*
	* If node does not have a defining use, visit each reachable node.
	*/
	if (!(du->ref_type & VAR_DEF)) {
		BVSET(definfo.list, node->block_id);
		if (node->branches)
			for (i = 0; list_next(node->branches, &i, &f);)
				u_traverse(f);
		BVCLR(definfo.list, node->block_id);
	}

	if (adu_count == prev_adu_count)
		BVSET(definfo.fruitless, node->block_id);
}