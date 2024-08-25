#!/bin/env bash

# $1: internal REF (e.g., latest)
if [ "$#" -ne 1 ]; then
    >&2 echo "Illegal number of parameters"
    >&2 echo "usage: ./scripts/package_it.sh REF"
    exit 1
fi

TARGET="scalapacke.tar.gz"
WRAP_FILE="scalapacke.wrap"

# create archive
echo "-- Archive"
tar -czf ${TARGET} src/ include/ meson.build meson_options.txt

# create wrap
echo "-- Wrap"
HASH=$(sha256sum ${TARGET} | cut -d " " -f 1 )
cp ./scripts/meson.wrap.in ${WRAP_FILE}
sed -i "s/#REF#/${1}/g" ${WRAP_FILE}
sed -i "s/#HASH#/${HASH}/g" ${WRAP_FILE}