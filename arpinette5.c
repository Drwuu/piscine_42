#include <assert.h>

int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);
int		ft_ten_queens_puzzle(void);

void	test_factorial(int (*fn)(int nb))
{
	assert(fn(-2147483648) == 0);
	assert(fn(-42) == 0);

	assert(fn(0) == 1);
	assert(fn(1) == 1);
	assert(fn(2) == 2);
	assert(fn(3) == 6);
	assert(fn(4) == 24);
	assert(fn(5) == 120);
}

void	test_ft_iterative_factorial()
{
	test_factorial(ft_iterative_factorial);
}

void	test_ft_recursive_factorial()
{
	test_factorial(ft_recursive_factorial);
}

void	test_power(int (*fn)(int nb, int power))
{
	assert(fn(10, -5) == 0);
	assert(fn(10, 0) == 1);
	assert(fn(0, 0) == 1);
	assert(fn(1, 1) == 1);
	assert(fn(1, 0) == 1);
	assert(fn(5, 5) == 3125);
	assert(fn(10, 3) == 1000);
	assert(fn(0, 3) == 0);
}

void	test_ft_iterative_power()
{
	test_power(ft_iterative_power);
}

void	test_ft_recursive_power()
{
	test_power(ft_recursive_power);
}

void	test_ft_fibonacci()
{
	assert(ft_fibonacci(-2147483648) == -1);
	assert(ft_fibonacci(-1) == -1);
	assert(ft_fibonacci(0) == 0);
	assert(ft_fibonacci(1) == 1);
	assert(ft_fibonacci(2) == 1);
	assert(ft_fibonacci(3) == 2);
	assert(ft_fibonacci(4) == 3);
	assert(ft_fibonacci(5) == 5);
	assert(ft_fibonacci(6) == 8);
	assert(ft_fibonacci(7) == 13);
}
void	test_ft_sqrt()
{
	assert(ft_sqrt(-2147483648) == 0);
	assert(ft_sqrt(-1) == 0);
	assert(ft_sqrt(0) == 0);
	assert(ft_sqrt(1) == 1);
	assert(ft_sqrt(2) == 0);
	assert(ft_sqrt(3) == 0);
	assert(ft_sqrt(4) == 2);
	assert(ft_sqrt(9) == 3);
	assert(ft_sqrt(10) == 0);
	assert(ft_sqrt(100) == 10);
	assert(ft_sqrt(2147483647) == 0);
	assert(ft_sqrt(2147395599) == 0);
	assert(ft_sqrt(2147395600) == 46340);
	assert(ft_sqrt(2147395601) == 0);
}
/*
void	test_ft_is_prime()
{
	assert(!ft_is_prime(-2147483648));
	assert(!ft_is_prime(-42));
	assert(!ft_is_prime(0));
	assert(!ft_is_prime(1));
	assert(!ft_is_prime(4));
	assert(!ft_is_prime(2147483646));

	assert(ft_is_prime(2));
	assert(ft_is_prime(3));
	assert(ft_is_prime(5));
	assert(ft_is_prime(7));
	assert(ft_is_prime(11));
	assert(ft_is_prime(2147483647));
}
*/

void	test_ft_find_next_prime()
{
	assert(2 == ft_find_next_prime(-2147483648));
	assert(2 == ft_find_next_prime(-42));
	assert(2 == ft_find_next_prime(0));
	assert(2 == ft_find_next_prime(1));

	assert(2 == ft_find_next_prime(2));
	assert(3 == ft_find_next_prime(3));
	assert(5 == ft_find_next_prime(5));
	assert(7 == ft_find_next_prime(7));
	assert(11 == ft_find_next_prime(11));
	assert(4211 == ft_find_next_prime(4202));
	assert(11 == ft_find_next_prime(8));
	assert(2147483647 == ft_find_next_prime(2147483647));
}

/*
void	test_ft_ten_queens_puzzle()
{
	assert(ft_ten_queens_puzzle() == 724);
}
*/
int main(void)
{
	test_ft_iterative_factorial();
	test_ft_recursive_factorial();
	test_ft_iterative_power();
	test_ft_recursive_power();
	test_ft_fibonacci();
	test_ft_sqrt();
	//test_ft_is_prime();
	test_ft_find_next_prime();
	//test_ft_ten_queens_puzzle();
}
