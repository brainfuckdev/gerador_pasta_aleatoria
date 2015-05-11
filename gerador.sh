#!/bin/bash

gcc main.c -o main
./main
nome=$(cat arquivo.txt | grep .)
mkdir $nome
