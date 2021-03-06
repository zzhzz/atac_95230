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
#	$Header: /u/saul/atac/src/tools/RCS/Makefile,v 3.7 94/04/04 16:12:40 jrh Exp $
#
#-----------------------------------------------$Log:	Makefile,v $
# Revision 3.7  94/04/04  16:12:40  jrh
# Release Copyright added
# 
# Revision 3.6  93/08/27  14:28:10  ewk
# Remove hili before makeing it, in case a working version already exists.
# 
# Revision 3.5  93/08/27  14:19:16  ewk
# Check if hili built with TERMCAP works, otherwise use TERMINFO (for AIX).
# 
# Revision 3.4  93/08/11  10:02:34  saul
# new predefs format
# 
# Revision 3.3  93/07/13  11:08:48  ewk
# Add atacLD information.
# 
# Revision 3.2  93/05/05  11:10:00  ewk
# Removed the "print" target.
# 
# Revision 3.1  93/04/29  17:19:39  ewk
# Changed to reflect the name changes from atacLib
# to ataclib and atacMin to atacmin.
# 
# Revision 3.0  92/11/06  07:46:20  saul
# propagate to version 3.0
# 
# Revision 2.3  92/11/03  08:31:58  saul
# add dependencies on portable.h
# 
# Revision 2.2  92/10/30  09:46:35  saul
# add CFLAGS=-I..
# 
# Revision 2.1  92/10/28  14:02:04  saul
# new installation procedures
# 
#-----------------------------------------------end of log
# 
# Makefile for ATAC components in tools directory.
#
INCLUDES=..
CFLAGS=-I$(INCLUDES) -g
SRC=atac atacCC atacLD atacmin atac_rt.c hili.c min.c predefs.list Makefile

system:		atac atacCC atacLD atacmin atac_rt.o hili minimize predefs.c 

clean:
		rm -f *.o hili minimize predefs.c

atac_rt.o:	atac_rt.c $(INCLUDES)/portable.h
		$(CC) $(CFLAGS) -c atac_rt.c

hili:		hili.c $(INCLUDES)/portable.h
		@rm -f hili
		@if							\
		    echo building hili with termcap;		 	\
		    echo $(CC) $(CFLAGS) hili.c -DM_TERMCAP -ltermcap -o hili;\
		    $(CC) $(CFLAGS) hili.c -DM_TERMCAP -ltermcap -o hili;\
		    ./hili /dev/null /dev/null 2>/dev/null;		\
		then							\
		    echo hili built successfully;			\
		elif							\
		    echo building hili with terminfo;		 	\
		    echo $(CC) $(CFLAGS) hili.c -DM_TERMINFO -lcurses -o hili;\
		    $(CC) $(CFLAGS) hili.c -DM_TERMINFO -lcurses -o hili;\
		then							\
		    echo hili built successfully;			\
		else							\
		    rm -f hili;						\
		    false;						\
		fi

minimize:	min.c $(INCLUDES)/portable.h
		$(CC) $(CFLAGS) min.c -o minimize

predefs.c:	predefs.list
		@for n in `grep -v '^#' predefs.list`;			\
		do							\
		    N=`echo $$n | tr '[a-z]' '[A-Z]'`;			\
		    for name in $$n _$$n __$$n __$${n}__ $$N _$$N __$$N __$${N}__;\
		    do							\
			echo "#ifdef $$name";				\
			echo "XxX$$name $$name";			\
			echo "#endif";					\
		    done						\
		done >predefs.c
		@echo predefs.c created
