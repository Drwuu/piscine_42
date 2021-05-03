#!/usr/bin/env bash

if [ $# -ne 1 ]; then
	echo "Usage: $0 <root>"
	exit 1
fi

# Testing ex00

echo "TESTING EX00"

gcc -Wall -Wextra -Werror $1/ex00/ft_print_program_name.c
cp a.out ceci-est-un-programme-avec-un-nom-quand-meme-tres-long
mkdir -p ceci/est/un/sous/dossier
cp a.out ceci/est/un/sous/dossier/programme

paste \
	<(
		echo "EXPECTED"
		echo "./a.out"
		echo "./ceci-est-un-programme-avec-un-nom-quand-meme-tres-long"
		echo "./ceci/est/un/sous/dossier/programme"
	) \
	<(
		echo "ACTUAL"
		./a.out
		./ceci-est-un-programme-avec-un-nom-quand-meme-tres-long
		./ceci/est/un/sous/dossier/programme
	) \
	| column -tx

rm -f a.out ceci-est-un-programme-avec-un-nom-quand-meme-tres-long
rm -rf ceci

echo

# Testing ex01

echo "TESTING EX01"

gcc -Wall -Wextra -Werror $1/ex01/ft_print_params.c

paste \
	<(
		echo "EXPECTED"
	) \
	<(
		echo "ACTUAL"
		./a.out
	) \
	| column -t -s $'\t'

paste \
	<(
		echo "EXPECTED"
		echo "Hello"
	) \
	<(
		echo "ACTUAL"
		./a.out "Hello"
	) \
	| column -t -s $'\t'

paste \
	<(
		echo "EXPECTED"
		echo "Hello"
		echo "world"
	) \
	<(
		echo "ACTUAL"
		./a.out "Hello" "world"
	) \
	| column -t -s $'\t'

paste \
	<(
		echo "EXPECTED"
		echo "Hello"
		echo "world"
		echo "and others"
	) \
	<(
		echo "ACTUAL"
		./a.out "Hello" "world" "and others"
	) \
	| column -t -s $'\t'

rm -f a.out

echo

# Testing ex02

echo "TESTING EX02"

gcc -Wall -Wextra -Werror $1/ex02/ft_rev_params.c

paste \
	<(
		echo "EXPECTED"
	) \
	<(
		echo "ACTUAL"
		./a.out
	) \
	| column -t -s $'\t'

paste \
	<(
		echo "EXPECTED"
		echo "Hello"
	) \
	<(
		echo "ACTUAL"
		./a.out "Hello"
	) \
	| column -t -s $'\t'

paste \
	<(
		echo "EXPECTED"
		echo "world"
		echo "Hello"
	) \
	<(
		echo "ACTUAL"
		./a.out "Hello" "world"
	) \
	| column -t -s $'\t'

paste \
	<(
		echo "EXPECTED"
		echo "and others"
		echo "world"
		echo "Hello"
	) \
	<(
		echo "ACTUAL"
		./a.out "Hello" "world" "and others"
	) \
	| column -t -s $'\t'

rm -f a.out

echo

# Testing ex03

echo "TESTING EX03"

gcc -Wall -Wextra -Werror $1/ex03/ft_sort_params.c

paste \
	<(
		echo "EXPECTED"
	) \
	<(
		echo "ACTUAL"
		./a.out
	) \
	| column -t -s $'\t'

paste \
	<(
		echo "EXPECTED"
		echo "Hello"
	) \
	<(
		echo "ACTUAL"
		./a.out "Hello"
	) \
	| column -t -s $'\t'

paste \
	<(
		echo "EXPECTED"
		echo "Hello"
		echo "world"
	) \
	<(
		echo "ACTUAL"
		./a.out "Hello" "world"
	) \
	| column -t -s $'\t'

paste \
	<(
		echo "EXPECTED"
		echo "Hello"
		echo "and others"
		echo "world"
	) \
	<(
		echo "ACTUAL"
		./a.out "Hello" "world" "and others"
	) \
	| column -t -s $'\t'
paste \
	<(
		echo "EXPECTED"
		echo "Hello"
		echo "and other"
		echo "and others"
		echo "world"
	) \
	<(
		echo "ACTUAL"
		./a.out "and other" "Hello" "world" "and others"
	) \
	| column -t -s $'\t'

rm -f a.out

echo

# Norminette

echo "NORMINETTE"
norminette -R CheckForbiddenSourceHeader $1
