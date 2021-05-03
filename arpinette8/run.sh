#!/usr/bin/env bash

if [ $# -ne 1 ]; then
	echo "Usage: $0 <root>"
	exit 1
fi

gcc -Wall -Wextra -Werror $1/*/*.h

gcc -Wall -Wextra -Werror -I $1/ex01 ex01-ft-boolean.c
./a.out
./a.out "odd"
./a.out "now" "even"
./a.out "and" "finally" "odd"

gcc -Wall -Wextra -Werror -I $1/ex02 ex02-ft-abs.c
./a.out

gcc -Wall -Wextra -Werror -I $1/ex03 ex03-ft-point.c
./a.out

gcc -Wall -Wextra -Werror -I . ex04-05.c $1/ex04/*.c $1/ex05/*.c
./a.out

norminette $1/ex00/*.h $1/ex03/*.h $1/ex04/*.c $1/ex05/*.c
norminette -R CheckDefine $1/ex01/*.h $1/ex02/*.h

