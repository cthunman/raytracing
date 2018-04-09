#!/bin/sh

g++ main.cpp
./a.out > img.ppm
open img.ppm
