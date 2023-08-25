#!/bin/bash
wget -P /tmp https://github.com/Am20666/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
