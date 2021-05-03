/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arpinette7.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:29:23 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/28 12:38:00 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arpinette7.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:45:50 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/26 16:28:49 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_strdup(char *str);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	**ft_split(char *str, char *charset);
/*
void	test_ft_strdup_inner(char *str)
{
	char	*a;
	char	*b;

	a = ft_strdup(str);	
	b = strdup(str);	

	assert(a != str);
	assert(strcmp(a, str) == 0);
	assert(strcmp(a, b) == 0);
	free(a);
	free(b);
}

void	test_ft_strdup(void)
{
	test_ft_strdup_inner("");
	test_ft_strdup_inner("Hello, world!");
	test_ft_strdup_inner("Hello\0, world!");
}
*/
/*
void	test_ft_range_content(int *range, int min, int max)
{
	int	*range_ptr;

	assert(range != NULL);
	range_ptr = range;
	while (min < max)
		assert(min++ == *range_ptr++);
	free(range);
}
*/
/*
void	test_ft_range(void)
{
	assert(ft_range(0, 0) == NULL);
	assert(ft_range(INT_MAX, INT_MIN) == NULL);
	test_ft_range_content(ft_range(1, 2), 1, 2);
	test_ft_range_content(ft_range(-1, 2), -1, 2);
	test_ft_range_content(ft_range(INT_MIN, INT_MIN + 9), INT_MIN, INT_MIN + 9);
	test_ft_range_content(ft_range(INT_MAX - 9, INT_MAX), INT_MAX - 9, INT_MAX);
	test_ft_range_content(ft_range(INT_MIN, INT_MAX), INT_MIN, INT_MAX);
}
*/
/*
void	test_ft_ultimate_range(void)
{
	{
		int	*range = (int*)42;
		assert(0 == ft_ultimate_range(&range, 0, 0));
		assert(range == NULL);
	}
	{
		int	*range = (int*)42;
		assert(0 == ft_ultimate_range(&range, INT_MAX, INT_MIN));
		assert(range == NULL);
	}
  	{
		int	*range = (int*)42;
		assert(1 == ft_ultimate_range(&range, 1, 2));
		test_ft_range_content(range, 1, 2);
	}
	{
		int	*range = (int*)42;
		assert(3 == ft_ultimate_range(&range, -1, 2));
		test_ft_range_content(range, -1, 2);
	}
	{
		int	*range = (int*)42;
		assert(9 == ft_ultimate_range(&range, INT_MIN, INT_MIN + 9));
		test_ft_range_content(range, INT_MIN, INT_MIN + 9);
	}
	{
		int	*range = (int*)42;
		assert(9 == ft_ultimate_range(&range, INT_MAX - 9, INT_MAX));
		test_ft_range_content(range, INT_MAX - 9, INT_MAX);
	}
	 {
	 	int	*range = (int*)42;
	 	assert(UINT_MAX == (unsigned int)ft_ultimate_range(&range, INT_MIN, INT_MAX));
	 	test_ft_range_content(range, INT_MIN, INT_MAX);
	 }
}
*/

void	test_ft_strjoin_inner(int size, char **strs, char *sep, char *expected)
{
	char *actual = ft_strjoin(size, strs, sep);
	//printf("actual = %s\n", actual);
	assert(strcmp(actual, expected) == 0);
	free(actual);
}

void	test_ft_strjoin(void)
{
	{
		char *strs[4] = { "This", "is", "a", "sentence" };
		test_ft_strjoin_inner(4, strs, " ", "This is a sentence");
	}
	{
		char *strs[4] = { "This", "is", "a", "sentence" };
		test_ft_strjoin_inner(4, strs, " , ", "This , is , a , sentence");
	}
	{
		char *strs[0] = {};
		test_ft_strjoin_inner(0, strs, "separator", "");
	}
	{
		char *strs[0] = {};
		test_ft_strjoin_inner(0, strs, "", "");
	}
	{
		char *strs[1] = {"word"};
		test_ft_strjoin_inner(1, strs, "separator", "word");
	}
	{
		char *strs[1] = {"word"};
		test_ft_strjoin_inner(0, strs, "separator", "");
	}
	{
		char *strs[2] = {"Sentence", "without separator"};
		test_ft_strjoin_inner(2, strs, "", "Sentencewithout separator");
	}
}
/*
void	test_ft_convert_base_inner(char *str, char *base_from, char *base_to, char *expected)
{
	char	*actual;

	actual = ft_convert_base(str, base_from, base_to);
	assert(strcmp(actual, expected) == 0);
	free(actual);
}

void	test_ft_convert_base_both(char *str, char *base_from, char *base_to, char *expected)
{
	test_ft_convert_base_inner(str, base_from, base_to, expected);
	test_ft_convert_base_inner(expected, base_to, base_from, str);
}

void	test_ft_convert_base(void)
{
	char *base_bin = "01";
	char *base_dec = "0123456789";
	char *base_hex = "0123456789abcdef";

	test_ft_convert_base_inner("\t\n\v\f\r +-+-+-+-+-+--2147483648dsaasddsa", base_dec, base_dec, "-2147483648");
	test_ft_convert_base_inner("\t\n\v\f\r +-++-+-+-+--2147483647dsaasddsa", base_dec, base_dec, "2147483647");

	test_ft_convert_base_both("-2147483648", base_dec, base_dec, "-2147483648");
	test_ft_convert_base_both("2147483647", base_dec, base_dec, "2147483647");
	test_ft_convert_base_both("0", base_dec, base_dec, "0");
	test_ft_convert_base_both("-42", base_dec, base_dec, "-42");
	test_ft_convert_base_both("42", base_dec, base_dec, "42");

	test_ft_convert_base_both("-2147483648", base_dec, base_hex, "-80000000");
	test_ft_convert_base_both("2147483647", base_dec, base_hex, "7fffffff");
	test_ft_convert_base_both("0", base_dec, base_hex, "0");
	test_ft_convert_base_both("-42", base_dec, base_hex, "-2a");
	test_ft_convert_base_both("42", base_dec, base_hex, "2a");

	test_ft_convert_base_both("-10000000000000000000000000000000", base_bin, base_hex, "-80000000");
	test_ft_convert_base_both("1111111111111111111111111111111", base_bin, base_hex, "7fffffff");
	test_ft_convert_base_both("0", base_bin, base_hex, "0");
	test_ft_convert_base_both("-101010", base_bin, base_hex, "-2a");
	test_ft_convert_base_both("101010", base_bin, base_hex, "2a");

	assert(NULL == ft_convert_base("10", "", base_dec));
	assert(NULL == ft_convert_base("10", base_dec, ""));
	assert(NULL == ft_convert_base("10", "1", base_dec));
	assert(NULL == ft_convert_base("10", base_dec, "1"));
	assert(NULL == ft_convert_base("10", "101", base_dec));
	assert(NULL == ft_convert_base("10", base_dec, "101"));
	assert(NULL == ft_convert_base("10", "10\t", base_dec));
	assert(NULL == ft_convert_base("10", base_dec, "10\t"));
	assert(NULL == ft_convert_base("10", "10+", base_dec));
	assert(NULL == ft_convert_base("10", base_dec, "10+"));

}

void	test_ft_split_result(char **actual, char **expected, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		assert(strcmp(actual[i], expected[i]) == 0);
		i += 1;
	}
	assert(actual[i] == expected[i]);
	assert(actual[i] == NULL);
	free(actual);
}

void	test_ft_split()
{
	{
		char *expected[5] = { "Hello", "world", "it", "is", NULL };
		test_ft_split_result(ft_split("Hello world it is", " "), expected, 5);
	}

	
	{
		char *expected[5] = { "Hello", "world", "it", "is", NULL };
		test_ft_split_result(ft_split("Hello world,it is", " ,"), expected, 5);
	}

	{
		char *expected[5] = { "Hello", "world", "it", "is", NULL };
		test_ft_split_result(ft_split("   Hello , world,it is   ", " ,"), expected, 5);
	}

	{
		char *expected[1] = { NULL };
		test_ft_split_result(ft_split("  ,,,,  ", " ,"), expected, 1);
	}

	{
		char *expected[2] = { ",,,,", NULL };
		test_ft_split_result(ft_split("  ,,,,  ", " "), expected, 2);
	}

	{
		char *expected[2] = { "  ,,,,  ", NULL };
		test_ft_split_result(ft_split("  ,,,,  ", ""), expected, 2);
	}

	{
		char *expected[1] = { NULL };
		test_ft_split_result(ft_split("", ""), expected, 1);
	}
	{
		char *expected[1] = { NULL };
		test_ft_split_result(ft_split("", "adsads"), expected, 1);
	}
	{
		char *expected[1] = { NULL };
		test_ft_split_result(ft_split("", "adsads"), expected, 1);
	}
}
*/
int		main(void)
{
//	test_ft_strdup();
//	test_ft_range();
//	test_ft_ultimate_range();
	test_ft_strjoin();
//	test_ft_convert_base();
//	test_ft_split();
	return (0);
}
