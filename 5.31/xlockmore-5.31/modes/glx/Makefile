# $Id : Makefile.in 5.24 2007/01/18 $
#
# xlockmore Makefile.in for autoconf (UNIX/VMS X11 support)
############################################################

# 

datarootdir = ${prefix}/share
srcdir = .
top_srcdir = ../..

PIXMAPDIR = $(top_srcdir)/pixmaps/
UTILDIR = $(top_srcdir)/xlock/
MODEDIR = $(top_srcdir)/modes/
GLDIR = $(top_srcdir)/modes/glx/
top_objdir = ../../
UTILOBJDIR = ../../xlock/
MODEOBJDIR = ../
GLOBJDIR = ./

N=
O=.o
#O=.obj
C=.c
CX=.cc
S=$(N) $(N)
#S=,
M=.xlk
E=
#E=.exe

DU = $(UTILDIR)
DOU = $(UTILOBJDIR)
DG = $(GLDIR)
DOG = $(GLOBJDIR)
OU = $(O)$(S)$(DOU)
OG = $(O)$(S)$(DOG)
CU = $(C) $(DU)
CG = $(C) $(DG)
CXG = $(CX) $(DG)

# please define
# C as the C source code extension
# CX as the C++ source code extension
# O as the object extension
# S as the separator for object code

##XLOCKUNSTABLEGLOBJS =
INVERTOBJS = $(DOG)i_figureeight$(O)$(S)\
$(DOG)i_linkage$(OG)i_sphere$(OG)i_spline$(O)$(S)\
$(DOG)i_threejet$(OG)i_threejetvec$(O)$(S)\
$(DOG)i_twojet$(OG)i_twojetvec$(O)
XLOCKDEPCPPGLOBJS = $(INVERTOBJS)
XLOCKMULTCPPGLOBJS = $(DOG)invert$(O)
#XLOCKTEXTGLOBJS = $(DOG)text3d$(O)
#XLOCKTEXT2GLOBJS = $(DOG)text3d2$(O)
SPROINGIESOBJS = $(DOG)buildlwo$(OG)sproingiewrap$(OG)s1_b$(O)$(S)\
$(DOG)s1_1$(OG)s1_2$(OG)s1_3$(OG)s1_4$(OG)s1_5$(OG)s1_6$(O)
ATLANTISOBJS = $(DOG)dolphin$(OG)shark$(OG)swim$(OG)whale$(O)
ATUNNELSOBJS = $(DOG)tunnel_draw$(O)
BUBBLE3DOBJS = $(DOG)b_draw$(OG)b_sphere$(OG)b_lockglue$(O)
GLPLANETOBJS = $(DOG)sphere$(O)
MOLECULEOBJS = $(DOG)tube$(OG)sphere$(O)
JUGGLER3DOBJS = $(DOG)tube$(OG)sphere$(OG)rotator$(O)$(S)\
$(DOG)glxfonts$(OG)gltrackball$(OG)trackball$(O)
XLOCKDEPGLOBJS = $(DOG)xpm-ximage$(OG)pipeobjs$(O)$(S)\
$(SPROINGIESOBJS)$(S)$(ATLANTISOBJS)$(S)$(ATUNNELSOBJS)$(S)\
$(BUBBLE3DOBJS)$(S)$(JUGGLER3DOBJS)$(S)$(XLOCKDEPCPPGLOBJS)
XLOCKNORMGLOBJS = $(DOG)biof$(OG)cage$(OG)gears$(O)$(S)\
$(DOG)moebius$(OG)morph3d$(OG)noof$(OG)rubik$(O)$(S)\
$(DOG)sierpinski3d$(OG)skewb$(OG)stairs$(OG)superquadrics$(O)$(S)\
$(XLOCKTEXTGLOBJS)$(S)\
$(XLOCKTEXT2GLOBJS)$(S)$(XLOCKUNSTABLEGLOBJS)
XLOCKMULTGLOBJS = $(DOG)fire$(OG)lament$(OG)sballs$(OG)molecule$(O)$(S)\
$(DOG)pipes$(OG)sproingies$(OG)atlantis$(OG)atunnels$(O)$(S)\
bubble3d$(OG)glplanet$(OG)juggler3d$(O)$(S)$(XLOCKMULTCPPGLOBJS)
XLOCKGLOBJS = $(XLOCKNORMGLOBJS)$(S)\
$(XLOCKDEPGLOBJS)$(S)$(XLOCKMULTGLOBJS)
# default target
all : $(XLOCKGLOBJS)

# this tells GNU make not to export variables into the environment
# But other makes do not understand its significance, so it must
# not be the first target in the file. So it is here, before
# any variables are created, but after the default target
.NOEXPORT :

SHELL = /bin/sh

prefix = /usr
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
mandir = /share/man/man1
xapploaddir = /usr/lib/X11/app-defaults

#CC = cc -g
#CC = cc -Ac -g
#CC = cc -Xc -g
#CC = acc -g
#CC = CC -g
#CC = gcc -g -Wall -ansi -pedantic
#CC = gcc -g -Wall -Wstrict-prototypes -Wnested-externs -Wno-format
#CC = gcc -g -Wall -W -Wshadow -Wpointer-arith -Wbad-function-cast -Wcast-align -Wwrite-strings -Waggregate-return -Wmissing-prototypes -Wstrict-prototypes
#CC = g++ -g -Wall
CC = gcc -Wnested-externs -Wno-format
#CXX = g++ -fpermissive
#CXX = g++ -g -Wall -Wstrict-prototypes -Wnested-externs -Wno-format
CXX = g++

#LINT = lint
LINT = lint -Ncheck=%all
#LINT = alint

#DEPEND = makedepend
DEPEND = makedepend
DEPEND_FLAGS = 
DEPEND_DEFINES = 

LN_S = ln -s
RM = rm -f
RM_S = $(RM)
ECHO = echo

#BLN_S = set file/enter=[]
#RM = delete/noconfirm/nolog
#RM_S = set file/remove/nolog
#ECHO = write sys$output

DEFINES = -DDEF_FILESEARCHPATH=\"$(xapploaddir)/%N%C%S:$(xapploaddir)/%N%S\"
DEFS = -DHAVE_CONFIG_H $(DEFINES)
XLOCKINC = -I. -I.. -I../.. -I$(UTILDIR) -I$(top_srcdir)  -I/usr/include -I/usr/include -I/usr/include -I/usr/include
CFLAGS = -O2 -g
CXXFLAGS = -g -O2
#CXXFLAGS = $(CPPFLAGS) $(DEFS) $(XLOCKINC) $(CFLAGS)
#CFLAGS = -O
#CFLAGS = -g

#If you have purify, and want to use it, uncomment this definition or
# run the make as `make PURIFY=purify'
# or run configure with the --with-purify argument.
PURIFY = 

.SUFFIXES : $(C) $(CX) $(O)

$(C)$(O) :
	$(CC) -c $(CPPFLAGS) $(DEFS) $(XLOCKINC) $(CFLAGS) $<

$(CX)$(O) :
	$(CXX) -c $(CPPFLAGS) $(DEFS) $(XLOCKINC) $(CXXFLAGS) $<

install :

install-program :

install-man :

install-ad :

uninstall :

uninstall-program :

uninstall-man :

uninstall-ad :

install.program : install-program

install.man : install-man

install.ad : install-ad

uninstall.program : uninstall-program

uninstall.man : uninstall-man

uninstall.ad : uninstall-ad

lint :

antic :
	antic $(GLDIR)*.h $(GLDIR)*.c $(GLDIR)*.cc

cppcheck :
	cppcheck -f -q $(GLDIR)*.c $(GLDIR)*.cc

xrdb :

man :

html :

hlp :

clean :
	$(RM) *.o *.xlk core *~ *% *.bak *.orig *.rej *.patch .pure
	$(RM) make.log MakeOut Makefile.dep

distclean : clean
	$(RM) Makefile

clean.all : distclean

# Adds all current dependencies to Makefile
depend :
	$(DEPEND) -s '# DO NOT DELETE: updated by make depend'              \
	$(DEPEND_FLAGS) --                                                  \
	$(XLOCKINC) $(DEFS) $(DEPEND_DEFINES) $(CFLAGS) --                  \
	$(XLOCKGLSRCS)

# Adds some dependencies to Makefile.in -- not totally accurate, but pretty
# close.  This excludes dependencies on files in /usr/include, etc.  It tries
# to include only dependencies on files which are themselves a part of this
# package.
distdepend :
	@echo updating dependencies in `pwd`/Makefile.in... ;               \
	$(DEPEND) -w 0 -f -                                                 \
	-s '# DO NOT DELETE: updated by make distdepend' $(DEPEND_FLAGS) -- \
	$(XLOCKINC) $(DEFS) $(DEPEND_DEFINES) $(CFLAGS) --                  \
	$(XLOCKGLSRCS) |                                                    \
	(                                                                   \
	  awk '/^#.*Id : Makefile.in/,/^# DO .*distdepend/' < Makefile.in ; \
	  sed -e 's@ \./@ @g;s@ /[^ ]*@@g;/^.*:$$/d'                        \
	      -e 's@^\.\./\.\./modes/glx@$$(GLOBJDIR)@'                     \
	      -e 's@\.\./\.\./pixmaps@$$(PIXMAPDIR)@g'                      \
	      -e 's@\.\./\.\./xlock@$$(UTILDIR)@g' ;                        \
	  echo ''                                                           \
	) > /tmp/distdepend.$$$$ &&                                         \
	mv Makefile.in Makefile.in.bak &&                                   \
	mv /tmp/distdepend.$$$$ Makefile.in

##############################################################################
#
# DO NOT DELETE: updated by make distdepend

$(GLOBJDIR)/biof.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/biof.o: $(top_objdir)/config.h
$(GLOBJDIR)/biof.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/biof.o: $(UTILDIR)/random.h
$(GLOBJDIR)/biof.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/cage.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/cage.o: $(top_objdir)/config.h
$(GLOBJDIR)/cage.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/cage.o: $(UTILDIR)/random.h
$(GLOBJDIR)/cage.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/cage.o: $(GLDIR)/e_textures.h
$(GLOBJDIR)/fire.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/fire.o: $(top_objdir)/config.h
$(GLOBJDIR)/fire.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/fire.o: $(UTILDIR)/random.h
$(GLOBJDIR)/fire.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/fire.o: $(UTILDIR)/iostuff.h
$(GLOBJDIR)/fire.o: $(GLDIR)/xpm-ximage.h
$(GLOBJDIR)/fire.o: $(PIXMAPDIR)/ground.xpm
$(GLOBJDIR)/fire.o: $(PIXMAPDIR)/tree.xpm
$(GLOBJDIR)/gears.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/gears.o: $(top_objdir)/config.h
$(GLOBJDIR)/gears.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/gears.o: $(UTILDIR)/random.h
$(GLOBJDIR)/gears.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/juggler3d.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/juggler3d.o: $(top_objdir)/config.h
$(GLOBJDIR)/juggler3d.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/juggler3d.o: $(UTILDIR)/random.h
$(GLOBJDIR)/juggler3d.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/lament.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/lament.o: $(top_objdir)/config.h
$(GLOBJDIR)/lament.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/lament.o: $(UTILDIR)/random.h
$(GLOBJDIR)/lament.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/lament.o: $(GLDIR)/xpm-ximage.h
$(GLOBJDIR)/lament.o: $(PIXMAPDIR)/lament.xpm
$(GLOBJDIR)/moebius.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/moebius.o: $(top_objdir)/config.h
$(GLOBJDIR)/moebius.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/moebius.o: $(UTILDIR)/random.h
$(GLOBJDIR)/moebius.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/moebius.o: $(GLDIR)/e_textures.h
$(GLOBJDIR)/morph3d.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/morph3d.o: $(top_objdir)/config.h
$(GLOBJDIR)/morph3d.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/morph3d.o: $(UTILDIR)/random.h
$(GLOBJDIR)/morph3d.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/morph3d.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/rubik.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/rubik.o: $(top_objdir)/config.h
$(GLOBJDIR)/rubik.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/rubik.o: $(UTILDIR)/random.h
$(GLOBJDIR)/rubik.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/skewb.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/skewb.o: $(top_objdir)/config.h
$(GLOBJDIR)/skewb.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/skewb.o: $(UTILDIR)/random.h
$(GLOBJDIR)/skewb.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/skewb.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/sballs.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/sballs.o: $(top_objdir)/config.h
$(GLOBJDIR)/sballs.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/sballs.o: $(UTILDIR)/random.h
$(GLOBJDIR)/sballs.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/sballs.o: $(UTILDIR)/iostuff.h
$(GLOBJDIR)/sballs.o: $(GLDIR)/xpm-ximage.h
$(GLOBJDIR)/sballs.o: $(PIXMAPDIR)/face.xpm
$(GLOBJDIR)/sballs.o: $(PIXMAPDIR)/back.xpm
$(GLOBJDIR)/stairs.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/stairs.o: $(top_objdir)/config.h
$(GLOBJDIR)/stairs.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/stairs.o: $(UTILDIR)/random.h
$(GLOBJDIR)/stairs.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/stairs.o: $(GLDIR)/e_textures.h
$(GLOBJDIR)/superquadrics.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/superquadrics.o: $(top_objdir)/config.h
$(GLOBJDIR)/superquadrics.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/superquadrics.o: $(UTILDIR)/random.h
$(GLOBJDIR)/superquadrics.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/xpm-ximage.o: $(top_objdir)/config.h
$(GLOBJDIR)/xpm-ximage.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/xpm-ximage.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/xpm-ximage.o: $(UTILDIR)/random.h
$(GLOBJDIR)/xpm-ximage.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/xpm-ximage.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/buildlwo.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/buildlwo.o: $(top_objdir)/config.h
$(GLOBJDIR)/buildlwo.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/buildlwo.o: $(UTILDIR)/random.h
$(GLOBJDIR)/buildlwo.o: $(GLDIR)/buildlwo.h
$(GLOBJDIR)/pipes.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/pipes.o: $(top_objdir)/config.h
$(GLOBJDIR)/pipes.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/pipes.o: $(UTILDIR)/random.h
$(GLOBJDIR)/pipes.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/pipes.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/pipes.o: $(GLDIR)/buildlwo.h
$(GLOBJDIR)/pipeobjs.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/pipeobjs.o: $(top_objdir)/config.h
$(GLOBJDIR)/pipeobjs.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/pipeobjs.o: $(UTILDIR)/random.h
$(GLOBJDIR)/pipeobjs.o: $(GLDIR)/buildlwo.h
$(GLOBJDIR)/sproingies.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/sproingies.o: $(top_objdir)/config.h
$(GLOBJDIR)/sproingies.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/sproingies.o: $(UTILDIR)/random.h
$(GLOBJDIR)/sproingies.o: $(GLDIR)/buildlwo.h
$(GLOBJDIR)/sproingiewrap.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/sproingiewrap.o: $(top_objdir)/config.h
$(GLOBJDIR)/sproingiewrap.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/sproingiewrap.o: $(UTILDIR)/random.h
$(GLOBJDIR)/sproingiewrap.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/sproingiewrap.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/s1_b.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/s1_b.o: $(top_objdir)/config.h
$(GLOBJDIR)/s1_b.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/s1_b.o: $(UTILDIR)/random.h
$(GLOBJDIR)/s1_b.o: $(GLDIR)/buildlwo.h
$(GLOBJDIR)/s1_1.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/s1_1.o: $(top_objdir)/config.h
$(GLOBJDIR)/s1_1.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/s1_1.o: $(UTILDIR)/random.h
$(GLOBJDIR)/s1_1.o: $(GLDIR)/buildlwo.h
$(GLOBJDIR)/s1_2.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/s1_2.o: $(top_objdir)/config.h
$(GLOBJDIR)/s1_2.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/s1_2.o: $(UTILDIR)/random.h
$(GLOBJDIR)/s1_2.o: $(GLDIR)/buildlwo.h
$(GLOBJDIR)/s1_3.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/s1_3.o: $(top_objdir)/config.h
$(GLOBJDIR)/s1_3.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/s1_3.o: $(UTILDIR)/random.h
$(GLOBJDIR)/s1_3.o: $(GLDIR)/buildlwo.h
$(GLOBJDIR)/s1_4.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/s1_4.o: $(top_objdir)/config.h
$(GLOBJDIR)/s1_4.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/s1_4.o: $(UTILDIR)/random.h
$(GLOBJDIR)/s1_4.o: $(GLDIR)/buildlwo.h
$(GLOBJDIR)/s1_5.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/s1_5.o: $(top_objdir)/config.h
$(GLOBJDIR)/s1_5.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/s1_5.o: $(UTILDIR)/random.h
$(GLOBJDIR)/s1_5.o: $(GLDIR)/buildlwo.h
$(GLOBJDIR)/s1_6.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/s1_6.o: $(top_objdir)/config.h
$(GLOBJDIR)/s1_6.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/s1_6.o: $(UTILDIR)/random.h
$(GLOBJDIR)/s1_6.o: $(GLDIR)/buildlwo.h
$(GLOBJDIR)/atlantis.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/atlantis.o: $(top_objdir)/config.h
$(GLOBJDIR)/atlantis.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/atlantis.o: $(UTILDIR)/random.h
$(GLOBJDIR)/atlantis.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/atlantis.o: $(GLDIR)/atlantis.h
$(GLOBJDIR)/dolphin.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/dolphin.o: $(top_objdir)/config.h
$(GLOBJDIR)/dolphin.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/dolphin.o: $(UTILDIR)/random.h
$(GLOBJDIR)/dolphin.o: $(GLDIR)/atlantis.h
$(GLOBJDIR)/shark.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/shark.o: $(top_objdir)/config.h
$(GLOBJDIR)/shark.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/shark.o: $(UTILDIR)/random.h
$(GLOBJDIR)/shark.o: $(GLDIR)/atlantis.h
$(GLOBJDIR)/swim.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/swim.o: $(top_objdir)/config.h
$(GLOBJDIR)/swim.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/swim.o: $(UTILDIR)/random.h
$(GLOBJDIR)/swim.o: $(GLDIR)/atlantis.h
$(GLOBJDIR)/whale.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/whale.o: $(top_objdir)/config.h
$(GLOBJDIR)/whale.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/whale.o: $(UTILDIR)/random.h
$(GLOBJDIR)/whale.o: $(GLDIR)/atlantis.h
$(GLOBJDIR)/bubble3d.o: $(GLDIR)/bubble3d.h
$(GLOBJDIR)/bubble3d.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/bubble3d.o: $(top_objdir)/config.h
$(GLOBJDIR)/bubble3d.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/bubble3d.o: $(UTILDIR)/random.h
$(GLOBJDIR)/b_draw.o: $(GLDIR)/bubble3d.h
$(GLOBJDIR)/b_draw.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/b_draw.o: $(top_objdir)/config.h
$(GLOBJDIR)/b_draw.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/b_draw.o: $(UTILDIR)/random.h
$(GLOBJDIR)/b_sphere.o: $(GLDIR)/bubble3d.h
$(GLOBJDIR)/b_sphere.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/b_sphere.o: $(top_objdir)/config.h
$(GLOBJDIR)/b_sphere.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/b_sphere.o: $(UTILDIR)/random.h
$(GLOBJDIR)/b_lockglue.o: $(GLDIR)/bubble3d.h
$(GLOBJDIR)/b_lockglue.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/b_lockglue.o: $(top_objdir)/config.h
$(GLOBJDIR)/b_lockglue.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/b_lockglue.o: $(UTILDIR)/random.h
$(GLOBJDIR)/b_lockglue.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/b_lockglue.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/invert.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/invert.o: $(top_objdir)/config.h
$(GLOBJDIR)/invert.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/invert.o: $(UTILDIR)/random.h
$(GLOBJDIR)/invert.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/invert.o: $(GLDIR)/i_linkage.h
$(GLOBJDIR)/i_figureeight.o: $(GLDIR)/i_figureeight.h
$(GLOBJDIR)/i_figureeight.o: $(GLDIR)/i_threejetvec.h
$(GLOBJDIR)/i_figureeight.o: $(GLDIR)/i_threejet.h
$(GLOBJDIR)/i_figureeight.o: $(GLDIR)/i_twojet.h
$(GLOBJDIR)/i_figureeight.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/i_figureeight.o: $(top_objdir)/config.h
$(GLOBJDIR)/i_figureeight.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/i_figureeight.o: $(UTILDIR)/random.h
$(GLOBJDIR)/i_figureeight.o: $(GLDIR)/i_twojetvec.h
$(GLOBJDIR)/i_linkage.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/i_linkage.o: $(top_objdir)/config.h
$(GLOBJDIR)/i_linkage.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/i_linkage.o: $(UTILDIR)/random.h
$(GLOBJDIR)/i_linkage.o: $(GLDIR)/i_linkage.h
$(GLOBJDIR)/i_linkage.o: $(GLDIR)/i_threejetvec.h
$(GLOBJDIR)/i_linkage.o: $(GLDIR)/i_threejet.h
$(GLOBJDIR)/i_linkage.o: $(GLDIR)/i_twojet.h
$(GLOBJDIR)/i_linkage.o: $(GLDIR)/i_twojetvec.h
$(GLOBJDIR)/i_linkage.o: $(GLDIR)/i_figureeight.h
$(GLOBJDIR)/i_linkage.o: $(GLDIR)/i_spline.h
$(GLOBJDIR)/i_linkage.o: $(GLDIR)/i_sphere.h
$(GLOBJDIR)/i_sphere.o: $(GLDIR)/i_threejetvec.h
$(GLOBJDIR)/i_sphere.o: $(GLDIR)/i_threejet.h
$(GLOBJDIR)/i_sphere.o: $(GLDIR)/i_twojet.h
$(GLOBJDIR)/i_sphere.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/i_sphere.o: $(top_objdir)/config.h
$(GLOBJDIR)/i_sphere.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/i_sphere.o: $(UTILDIR)/random.h
$(GLOBJDIR)/i_sphere.o: $(GLDIR)/i_twojetvec.h
$(GLOBJDIR)/i_sphere.o: $(GLDIR)/i_figureeight.h
$(GLOBJDIR)/i_sphere.o: $(GLDIR)/i_spline.h
$(GLOBJDIR)/i_sphere.o: $(GLDIR)/i_sphere.h
$(GLOBJDIR)/i_spline.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/i_spline.o: $(top_objdir)/config.h
$(GLOBJDIR)/i_spline.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/i_spline.o: $(UTILDIR)/random.h
$(GLOBJDIR)/i_spline.o: $(GLDIR)/i_spline.h
$(GLOBJDIR)/i_spline.o: $(GLDIR)/i_threejetvec.h
$(GLOBJDIR)/i_spline.o: $(GLDIR)/i_threejet.h
$(GLOBJDIR)/i_spline.o: $(GLDIR)/i_twojet.h
$(GLOBJDIR)/i_spline.o: $(GLDIR)/i_twojetvec.h
$(GLOBJDIR)/i_spline.o: $(GLDIR)/i_evert.h
$(GLOBJDIR)/i_threejet.o: $(GLDIR)/i_threejet.h
$(GLOBJDIR)/i_threejet.o: $(GLDIR)/i_twojet.h
$(GLOBJDIR)/i_threejet.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/i_threejet.o: $(top_objdir)/config.h
$(GLOBJDIR)/i_threejet.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/i_threejet.o: $(UTILDIR)/random.h
$(GLOBJDIR)/i_threejetvec.o: $(GLDIR)/i_threejetvec.h
$(GLOBJDIR)/i_threejetvec.o: $(GLDIR)/i_threejet.h
$(GLOBJDIR)/i_threejetvec.o: $(GLDIR)/i_twojet.h
$(GLOBJDIR)/i_threejetvec.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/i_threejetvec.o: $(top_objdir)/config.h
$(GLOBJDIR)/i_threejetvec.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/i_threejetvec.o: $(UTILDIR)/random.h
$(GLOBJDIR)/i_threejetvec.o: $(GLDIR)/i_twojetvec.h
$(GLOBJDIR)/i_twojet.o: $(GLDIR)/i_twojet.h
$(GLOBJDIR)/i_twojet.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/i_twojet.o: $(top_objdir)/config.h
$(GLOBJDIR)/i_twojet.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/i_twojet.o: $(UTILDIR)/random.h
$(GLOBJDIR)/i_twojetvec.o: $(GLDIR)/i_twojetvec.h
$(GLOBJDIR)/i_twojetvec.o: $(GLDIR)/i_twojet.h
$(GLOBJDIR)/i_twojetvec.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/i_twojetvec.o: $(top_objdir)/config.h
$(GLOBJDIR)/i_twojetvec.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/i_twojetvec.o: $(UTILDIR)/random.h
$(GLOBJDIR)/text3d.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/text3d.o: $(top_objdir)/config.h
$(GLOBJDIR)/text3d.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/text3d.o: $(UTILDIR)/random.h
$(GLOBJDIR)/text3d.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/text3d.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/text3d.o: $(UTILDIR)/iostuff.h
$(GLOBJDIR)/text3d.o: $(GLDIR)/text3d.h
$(GLOBJDIR)/text3d2.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/text3d2.o: $(top_objdir)/config.h
$(GLOBJDIR)/text3d2.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/text3d2.o: $(UTILDIR)/random.h
$(GLOBJDIR)/text3d2.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/text3d2.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/text3d2.o: $(UTILDIR)/iostuff.h
$(GLOBJDIR)/text3d2.o: $(GLDIR)/text3d2.h
$(GLOBJDIR)/text3d2.o: $(GLDIR)/rotator.h
$(GLOBJDIR)/rotator.o: $(UTILDIR)/random.h
$(GLOBJDIR)/rotator.o: $(GLDIR)/rotator.h
$(GLOBJDIR)/atunnels.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/atunnels.o: $(top_objdir)/config.h
$(GLOBJDIR)/atunnels.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/atunnels.o: $(UTILDIR)/random.h
$(GLOBJDIR)/atunnels.o: $(UTILDIR)/visgl.h
$(GLOBJDIR)/atunnels.o: $(UTILDIR)/iostuff.h
$(GLOBJDIR)/atunnels.o: $(GLDIR)/xpm-ximage.h
$(GLOBJDIR)/atunnels.o: $(PIXMAPDIR)/tunnel0.xpm
$(GLOBJDIR)/atunnels.o: $(PIXMAPDIR)/tunnel1.xpm
$(GLOBJDIR)/atunnels.o: $(PIXMAPDIR)/tunnel2.xpm
$(GLOBJDIR)/tunnel_draw.o: $(UTILDIR)/xlock.h
$(GLOBJDIR)/tunnel_draw.o: $(top_objdir)/config.h
$(GLOBJDIR)/tunnel_draw.o: $(UTILDIR)/mode.h
$(GLOBJDIR)/tunnel_draw.o: $(UTILDIR)/random.h
$(GLOBJDIR)/tunnel_draw.o: $(GLDIR)/tunnel_draw.h
