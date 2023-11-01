#!/bin/bash

echo "Hello World"
echo -n "join"
echo "ed"
echo "1" "2"  # space between
echo -e "1\t2\t3\n"  # \t tab \n newline
# default bash in macOS does not support unicode from echo 
perl -CO -E 'say chr 0x1f600' # smile

cat hello.txt
touch newfile.txt