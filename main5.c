#include <stdio.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int index);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main()
{
/*
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(10));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(-7));
	printf("\n");
	printf("%d\n", ft_recursive_factorial(4));
	printf("%d\n", ft_recursive_factorial(10));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(-7));
	printf("\n");
	printf("%d\n", ft_iterative_power(3, 3));
	printf("%d\n", ft_iterative_power(1, 3));
	printf("%d\n", ft_iterative_power(0, 3));
	printf("%d\n", ft_iterative_power(9, 3));
	printf("%d\n", ft_iterative_power(20, 4));
	printf("%d\n", ft_iterative_power(3, 1));	
	printf("\n");
	printf("%d\n", ft_fibonacci(-1));
	printf("%d\n", ft_fibonacci(-1));
 	printf("%d\n", ft_fibonacci(0));
 	printf("%d\n", ft_fibonacci(1));
 	printf("%d\n", ft_fibonacci(6));
	printf("\n");
 */	
/*
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(2147483645));
	printf("%d\n", ft_sqrt(-2147483648));
	printf("%d\n", ft_sqrt(100));*/
/*
	printf("%d\n", ft_is_prime(59));
	printf("%d\n", ft_is_prime(67));
	printf("%d\n", ft_is_prime(79));
	printf("%d\n", ft_is_prime(175));
	printf("%d\n", ft_is_prime(20));
	printf("%d\n", ft_is_prime(32));
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(2147483642));
	printf("%d\n", ft_is_prime(-2147483642));
	printf("%d\n", ft_is_prime(-2147483648));
*/


 	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(59));
	printf("%d\n", ft_find_next_prime(67));
	printf("%d\n", ft_find_next_prime(79));
	printf("%d\n", ft_find_next_prime(175));
	printf("%d\n", ft_find_next_prime(20));
	printf("%d\n", ft_find_next_prime(32));
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(2147483642));
	printf("%d\n", ft_find_next_prime(-2147483648));
	printf("%d\n", ft_find_next_prime(-2147483642));

}
