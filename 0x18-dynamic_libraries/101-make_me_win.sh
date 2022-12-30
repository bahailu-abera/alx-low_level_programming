#!/bin/bash
wget https://github.com/bahailu-abera/alx-low_level_programming/raw/master/0x18-dynamic_libraries/myrand.so -P ~
export LD_PRELOAD=~/myrand.so
