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
# $Header: /u/saul/atac/src/atac_cpp/RCS/Makefile,v 3.2 94/04/04 10:22:52 jrh Exp $
#
#-----------------------------------------------$Log:	Makefile,v $
# Revision 3.2  94/04/04  10:22:52  jrh
# Add Release Copyright
# 
# Revision 3.1  93/03/16  07:51:54  saul
# Remove old reference to "sys" directory.  No longer used.
# 
# Revision 3.0  92/11/06  07:46:49  saul
# propagate to version 3.0
# 
# Revision 2.11  92/11/03  08:32:06  saul
# add dependencies on portable.h
# 
# Revision 2.10  92/11/02  11:47:34  saul
# don't create include files
# 
# Revision 2.9  92/10/30  09:49:50  saul
# add CFLAGS=-I..
# 
# Revision 2.8  92/10/28  09:13:36  saul
# New predefs procedures
# create sys/time.h and sys/resource.h when needed
# 
# Revision 2.7  92/10/09  08:28:39  saul
# Add clean target.
# 
# Revision 2.6  92/10/05  10:38:21  saul
# Avoid 'up to date' message
# 
# Revision 2.5  92/09/08  07:52:19  saul
# add -DATAC_MODS instead of -DATAC...
# 
# Revision 2.4  92/04/06  13:35:25  saul
# fix interaction with ../Makefile
# 
# Revision 2.3  92/04/06  12:47:02  saul
# GNU version 1.40 + ATAC_EXPAND + ATAC_LINENO
# 
# Revision 2.2  91/06/19  13:53:58  saul
# fix log in header
# 
# Revision 2.1  91/06/19  13:45:26  saul
# Propagte to version 2.0
#
# Revision 1.1  91/06/12  20:38:00  saul
# Aug 1990 baseline
#-----------------------------------------------end of log
#
DEFINES=-DHAVE_CONFIG_H
INCLUDES=..
CFLAGS =-I$(INCLUDES) $(DEFINES) -g

OBSTACK=obstack.o

system:		atac_cpp

clean:
		rm -f *.o cexp.c atac_cpp

atac_cpp:	cccp.o cexp.o version.o $(OBSTACKS)
		$(CC) -o atac_cpp cccp.o cexp.o version.o
		
obstack.o:	obstack.c obstack.h $(INCLUDES)/portable.h

cexp.c:		cexp.y
		$(YACC) cexp.y
		mv y.tab.c cexp.c

cexp.o:		cexp.c $(INCLUDES)/config.h $(INCLUDES)/portable.h

cccp.o: cccp.c alloca.c $(INCLUDES)/config.h $(INCLUDES)/portable.h
		$(CC) -c $(CFLAGS) -DATAC_MODS cccp.c
