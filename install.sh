#!/bin/bash

mkdir build && cd build || exit 1
cmake .. && make && make install || exit 1
cd .. || exit 1
rm -r build
