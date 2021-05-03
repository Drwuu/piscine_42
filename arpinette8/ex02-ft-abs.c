#include <assert.h>
#include <ft_abs.h>

int	main(void)
{
	assert(ABS(-42) == 42);
	assert(ABS(42) == 42);
	assert(ABS(0) == 0);
	assert(ABS(2147483647) == 2147483647);
	assert(ABS(-2147483647) == 2147483647);
}
