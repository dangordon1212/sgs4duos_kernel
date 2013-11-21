#!/bin/bash

BUILD_TOP_DIR=$(pwd)

source my_setup.sh

test -z $CROSS_COMPILE && exit 1

make ja3gduos_chn_cu_00_defconfig
nice make -j3

