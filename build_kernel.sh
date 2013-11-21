#!/bin/bash

BUILD_TOP_DIR=$(pwd)
NUMCPU=$(grep processor /proc/cpuinfo | tail -n1 | tr -d ' ' | cut -d':' -f2)

source my_setup.sh

test -z $CROSS_COMPILE && exit 1

make ja3gduos_chn_cu_00_defconfig

nice make -j $NUMCPU

