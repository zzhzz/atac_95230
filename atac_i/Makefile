#****************************************************************
#Copyright (c) 1993 Bell Communications Research, Inc. (Bellcore)
#
#Permission to use, copy, modify, and distribute this material
#for any purpose and without fee is hereby granted, provided
#that the above copyright notice and this permission notice
#appear in all copies, and that the name of Bellcore not be
#used in advertising or publicity pertaining to this
#material without the specific, prior written permission
#of an authorized representative of Bellcore.  BELLCORE
#MAKES NO REPRESENTATIONS ABOUT THE ACCURACY OR SUITABILITY
#OF THIS MATERIAL FOR ANY PURPOSE.  IT IS PROVIDED "AS IS",
#WITHOUT ANY EXPRESS OR IMPLIED WARRANTIES.
#****************************************************************
# $Header: /u/saul/atac/src/atac_i/RCS/Makefile,v 1.2 94/04/04 10:11:00 jrh Exp $
#
#-----------------------------------------------$Log:	Makefile,v $
# Revision 1.2  94/04/04  10:11:00  jrh
# Add Release Copyright
# 
# Revision 1.1  93/08/23  15:58:19  ewk
# Initial revision
# 
# Revision 1.1  93/08/23  15:51:15  ewk
# Initial revision
# 
# Revision 3.5  93/08/09  12:25:29  saul
# iconst.c dropped
# 
# Revision 3.4  93/07/12  11:53:36  saul
# MVS bitvector ==> bitvec due to MVS name change; makefile not used for MVS
# 
# Revision 3.3  93/05/05  11:07:37  ewk
# Removed the "print" target.
# 
# Revision 3.2  93/04/29  17:12:46  ewk
# Removed references to $OPT (optimization) flag and explicit
# compilation rules for alldu.c, dug.c, and list.c.  These files
# now use the implicit rule and compile in the same way as other
# modules.
# 
# Revision 3.1  93/04/02  10:33:30  saul
# Include memset.o.
# 
# Revision 3.0  92/11/06  07:45:48  saul
# propagate to version 3.0
# 
# Revision 2.13  92/11/03  08:31:47  saul
# add dependencies on portable.h
# 
# Revision 2.12  92/10/30  09:44:47  saul
# add CFLAGS=-I..
# 
# Revision 2.11  92/10/28  08:56:59  saul
# added print and clean targets
# 
# Revision 2.10  92/10/09  08:28:15  saul
# Add clean target.
# 
# Revision 2.9  92/10/05  10:38:53  saul
# Avoid 'up to date' message
# 
# Revision 2.8  92/09/30  10:34:15  saul
# Get rid of -g compiler option.  Add tnode.o.
# 
# Revision 2.7  92/09/16  07:36:33  saul
# Fix support for scan_test
# 
# Revision 2.6  92/09/08  08:03:37  saul
# Add ../version.h.
# 
# Revision 2.5  92/07/10  13:53:19  saul
# New source files const.c reglist.c; some new dependencies
# 
# Revision 2.4  92/04/07  09:00:26  saul
# remove ATACYSIS #ifdefs
# 
# Revision 2.3  92/03/17  15:19:33  saul
# fix copyright
# 
# Revision 2.2  92/03/17  14:22:36  saul
# copyright
# 
# Revision 2.1  91/06/13  12:39:33  saul
# Propagate to version 2.0
# 
# Revision 1.2  91/06/12  22:12:29  saul
# added parser target
# 
# Revision 1.1  91/06/12  20:25:45  saul
# Aug 1990 baseline
# 
#-----------------------------------------------end of log
#
INCLUDES=..
CFLAGS=-I$(INCLUDES) -g

OBJ=		atac_i.o	\
		fg_module.o	\
		fg_stmt.o	\
		fg_expr.o	\
		dug.o		\
		paths.o		\
		mark.o		\
		allpaths.o	\
		alldu.o	
SRC=$(OBJ:.o=.c) bitvec.h dug.h

PARSER_OBJ=	srcpos.o	\
		scan.o		\
		Pgram.o		\
		strtab.o	\
		upfix.o		\
		tree.o		\
		print_sym.o	\
		sym.o		\
		deparse.o	\
		type.o		\
		error.o		\
		list.o		\
		filestamp.o	\
		table.o		\
		reglist.o	\
		tnode.o		\
		const.o
PARSER_SRC=$(OBJ:.o=.c) deparse.h	\
	 hook.h scan.h srcpos.h sym.h tnode.h tree.h Pgram.y

system:	atac_i

clean:
		rm -f $(OBJ) $(PARSER_OBJ)
		rm -f atac_i parser scan_test Pgram.c Pgram.h
		rm *~

atac_i:	$(OBJ) $(PARSER_OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(PARSER_OBJ) -o atac_i

parser:	parser.o $(PARSER_OBJ)
	$(CC) $(CFLAGS) parser.o $(PARSER_OBJ) -o parser

filestamp.o:	filestamp.c $(INCLUDES)/portable.h

alldu.o:	alldu.c dug.h bitvec.h $(INCLUDES)/portable.h

allpaths.o:	allpaths.c dug.h $(INCLUDES)/portable.h

type.o:		type.c srcpos.h tnode.h sym.h tree.h hook.h		\
			$(INCLUDES)/portable.h

error.o:	error.c srcpos.h $(INCLUDES)/portable.h

srcpos.o:	srcpos.c srcpos.h tnode.h $(INCLUDES)/portable.h

fg_module.o:	fg_module.c srcpos.h tnode.h tree.h sym.h dug.h		\
			$(INCLUDES)/version.h $(INCLUDES)/portable.h

fg_stmt.o:	fg_stmt.c srcpos.h tnode.h tree.h sym.h dug.h		\
			$(INCLUDES)/portable.h

fg_expr.o:	fg_expr.c srcpos.h tnode.h tree.h sym.h dug.h		\
			 $(INCLUDES)/portable.h

paths.o:	paths.c sym.h dug.h bitvec.h $(INCLUDES)/portable.h

dug.o:		dug.c sym.h dug.h $(INCLUDES)/version.h $(INCLUDES)/portable.h

mark.o:		mark.c srcpos.h tnode.h tree.h dug.h $(INCLUDES)/portable.h

deparse.o:	deparse.c srcpos.h tnode.h tree.h deparse.h		\
			 $(INCLUDES)/portable.h

atac_i.o:	atac_i.c srcpos.h tnode.h tree.h $(INCLUDES)/portable.h

scan.o:		scan.c srcpos.h scan.h Pgram.h $(INCLUDES)/portable.h

Pgram.o:	Pgram.c srcpos.h scan.h tnode.h tree.h $(INCLUDES)/portable.h
		$(CC) -c -D'YYMAXDEPTH=200' $(CFLAGS) Pgram.c

Pgram.h Pgram.c:	Pgram.y
		bison -ytd Pgram.y
		mv y.tab.h Pgram.h
		mv y.tab.c Pgram.c

strtab.o:	strtab.c $(INCLUDES)/portable.h

tree.o:		tree.c srcpos.h tnode.h tree.h hook.h $(INCLUDES)/portable.h

print_sym.o:	print_sym.c srcpos.h tnode.h sym.h $(INCLUDES)/portable.h

sym.o:		sym.c srcpos.h tnode.h sym.h tree.h $(INCLUDES)/portable.h

scan_test:	scan.o scan_test.o table.o strtab.o srcpos.o error.o list.o	\
			 filestamp.o upfix.o $(INCLUDES)/portable.h
		$(CC) scan.o scan_test.o strtab.o table.o srcpos.o list.o	\
			error.o upfix.o filestamp.o -o scan_test

scantest.o:	srcpos.h scan.c Pgram.h tnode.h $(INCLUDES)/portable.h

list.o:		list.c $(INCLUDES)/portable.h

parser.o:	parser.c srcpos.h tnode.h tree.h $(INCLUDES)/portable.h

reglist.o:	reglist.c $(INCLUDES)/portable.h

const.o:	const.c srcpos.h tnode.h tree.h sym.h $(INCLUDES)/portable.h

tnode.o:	srcpos.h tnode.h $(INCLUDES)/portable.h

