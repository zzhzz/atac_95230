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
#
# $Id: makefile.in,v 3.6 2013/12/08 16:56:16 tom Exp $
#
# @Log: makefile.in,v @
# Revision 3.5  1998/08/23 19:48:41  tom
# suppress echo of link-command.
#
# Revision 3.4  1998/08/23 18:49:44  tom
# mods to support configure --srcdir
#
# Revision 3.3  1997/11/04 01:35:39  tom
# add EXTRA_CFLAGS
#
# Revision 3.2  1997/04/25 13:42:31  tom
# CC-substitution
#
# Revision 3.1  1996/11/11 23:27:19  tom
# RCS_BASE
#
# Revision 3.3  1995/12/29 21:21:03  tom
# mods for autoconfig
#
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

SHELL		= /bin/sh

srcdir          = .


CC		= gcc
CPP		= gcc -E
YACC		= bison -y
INCLUDES	= ..
CPPFLAGS	=  -D_GNU_SOURCE -I. -I$(INCLUDES) -I$(srcdir)/.. -I$(srcdir) -DHAVE_CONFIG_H -DATAC_MODS
CFLAGS		= -O2 

OBSTACK=obstack.o

system:		atac_cpp

.SUFFIXES : .i

.c.o:
	
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $(srcdir)/$*.c

.c.i:
	
	$(CPP) -C $(CPPFLAGS) $(srcdir)/$*.c >$@

clean:
		rm -f *.o cexp.c atac_cpp

atac_cpp:	cccp.o cexp.o version.o $(OBSTACKS)
		$(CC) -o $@ cccp.o cexp.o version.o

obstack.o:	obstack.c \
		obstack.h \
		$(INCLUDES)/portable.h

cexp.c:		cexp.y
		$(YACC) $(srcdir)/cexp.y
		mv y.tab.c cexp.c

cexp.o:		cexp.c \
		$(INCLUDES)/config.h \
		$(INCLUDES)/portable.h
	$(CC) $(CPPFLAGS) $(CFLAGS) -c cexp.c

cccp.o:		cccp.c \
		alloca.c \
		$(INCLUDES)/config.h \
		$(INCLUDES)/portable.h
