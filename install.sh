#!/bin/bash

## Install OpenCV
apt-get update
apt-get install python3-opencv libopencv-dev -y
ldconfig

mkdir build && cd build || exit 1
cmake .. && make -j && make install || exit 1
cd .. || exit 1
rm -r build
