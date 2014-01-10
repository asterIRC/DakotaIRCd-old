#!/bin/sh
SHELL="/bin/bash"
CP="/usr/bin/install -c"
top_builddir="."
LT_OBJDIR=".libs"
if test "$#" != "2"; then
	echo "Incorrect number of arguments";
	exit 1
fi

SHLIBEXT=".so"
OBJECT="${1}"
OBJBASE=`basename ${1}`
SRCDIR=`echo ${OBJECT}|sed -es/${OBJBASE}//`
DEST="${2}"
SOBASE=$(echo ${OBJBASE} | sed -e's/\.la$//')
TARGETOBJ="${SOBASE}${SHLIBEXT}"

RUN="${CP} ${SRCDIR}${LT_OBJDIR}/${TARGETOBJ} ${DEST}/${TARGETOBJ}"

echo "  MODINSTALL ${TARGETOBJ}"
$RUN


