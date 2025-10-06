#!/bin/bash

if [ $# -ne 2 ]; then
	echo "Usage: $0 <path_to_a_folder> <search_string>"
	exit 1
fi

filesdir=$1
searchstr=$2

if [ ! -d $filesdir ]; then
	echo "$filesdir is not a directory"
	exit 1
fi

number_of_files=$(find $filesdir -type f | wc -l)
number_of_matching_lines=$(grep -r $searchstr $filesdir | wc -l)

echo "The number of files are $number_of_files and the number of matching lines are $number_of_matching_lines"
