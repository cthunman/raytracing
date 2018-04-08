#!/bin/sh

g++ createImage.cpp
./a.out > img.ppm
open img.ppm
