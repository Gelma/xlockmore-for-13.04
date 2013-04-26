#!/bin/sh
VERSION=`cat xlock/version.h | cut -d\" -f2 | cut -d\- -f2`
PARENT=xlockmore
KEY=377919AE
NAME=xlockmore
NAME95=xlock95
gpg --recv-keys $KEY
for PROG in $NAME-${VERSION}.tar.bz2 $NAME95-${VERSION}.zip; do
	gpg --verify ../$PROG.asc ../$PROG
	cat ../$PROG.md5
	md5sum ../$PROG
	cat ../$PROG.sha
	sha1sum ../$PROG
done
