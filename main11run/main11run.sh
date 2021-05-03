#!/usr/bin/env sh

if [ $# -ne 1 ]; then
	echo "Usage: $0 <root>"
	exit 1
fi

make -C $1./ re

$1./do-op
$1./do-op 1 + 1
# 2
$1./do-op 42amis - --+-20toto12
# 62
$1./do-op 1 p 1
# 025 / 0
$1./do-op 1 + toto3
# 1
$1./do-op toto3 + 4
# 4
$1./do-op foo plus bar
# 0
$1./do-op 25 / 0
# Stop : division by zero
$1./do-op 25 % 0
# Stop : modulo by zero

echo "OTHER EXERCICES TESTS"
gcc -Wall -Wextra -Werror main.c $1./*.c && ./a.out
echo "END"

make -C $1./ fclean
norminette $1
