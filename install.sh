#!/bin/bash

mkdir build && cd build || exit 1
cmake .. && make && make install
cd .. || exit 1
rm -r build