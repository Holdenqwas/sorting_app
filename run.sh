#!/bin/bash

# compile
g++ main.cpp gui.cpp `wx-config --cxxflags --libs std` -o ./compiled/program
# run
./compiled/program