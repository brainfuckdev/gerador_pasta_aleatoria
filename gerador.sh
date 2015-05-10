#!/bin/bash
./main
nome=$(cat arquivo.txt | grep .)
mkdir $nome
