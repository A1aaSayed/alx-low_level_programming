#!/bin/bash
wget -P https://github.com/A1aaSayed/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LS_PRELOAD=/libgiga.so
