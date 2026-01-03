#!/bin/bash

export LIBRARY_PATH=/usr/local/lib:$LIBRARY_PATH
gcc -o main main.c -lraylib 
