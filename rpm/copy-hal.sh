#!/bin/sh

set -e

OUT_DEVICE=${HABUILD_DEVICE:-$DEVICE}

if [ ! -d ./out/target/product/${OUT_DEVICE}/vendor_dlkm ]; then
    echo "Please build vendor_dlkm as per HADK instructions"
    exit 1
fi

fold=$(dirname "$0")/../vendor_dlkm
rm -rf $fold
cp -a ./out/target/product/${OUT_DEVICE}/vendor_dlkm $fold

ls -lh $fold

