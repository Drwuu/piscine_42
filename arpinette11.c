/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arpascal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 19:57:36 by arpascal          #+#    #+#             */
/*   Updated: 2020/09/30 22:37:06 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_foreach(int *tab, int length, void (*f)(int));
int		*ft_map(int *tab, int length, int (*f)(int));
int		ft_any(char **tab, int(*f)(char*));
int		ft_count_if(char **tab, int length, int (*f)(char*));
int		ft_is_sort(int *tab, int length, int(*f)(int, int));
void	ft_sort_string_tab(char **tab);
void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

void	test_ft_foreach_inner(int n)
{
	printf("%d\n", n);
}

void	test_ft_foreach(void)
{
	int tab[10] = { 1, 2, 42, 4, 5, 6, 7, 13, 9, 10 };
	ft_foreach(tab, 10, test_ft_foreach_inner);
}

int test_ft_map_inner(int n)
{
	return (n + 2);
}

void	test_ft_map(void)
{
	int tab[10] = { 1, 2, 42, 4, 5, 6, 7, 13, 9, 10 };
	int *result = ft_map(tab, 10, test_ft_map_inner);
	int *result_cpy = result;
	assert(*result++ == 2 + 1);
	assert(*result++ == 2 + 2);
	assert(*result++ == 2 + 42);
	assert(*result++ == 2 + 4);
	assert(*result++ == 2 + 5);
	assert(*result++ == 2 + 6);
	assert(*result++ == 2 + 7);
	assert(*result++ == 2 + 13);
	assert(*result++ == 2 + 9);
	assert(*result++ == 2 + 10);
	free(result_cpy);
}

int		test_ft_any_is_hello(char *str)
{
	return (strcmp(str, "Hello") == 0);
}

int		test_ft_any_is_world(char *str)
{
	return (strcmp(str, "world") == 0);
}

int		test_ft_any_is_hello_world(char *str)
{
	return (strcmp(str, "Hello, world!") == 0);
}

void	test_ft_any(void)
{
	char *tab[] = { "Hello", "world",  NULL };
	assert(ft_any(tab, test_ft_any_is_hello) == 1);
	assert(ft_any(tab, test_ft_any_is_world) == 1);
	assert(ft_any(tab, test_ft_any_is_hello_world) == 0);
}

int		test_ft_count_if_is_longer_than_5(char *str)
{
	return (strlen(str) > 5);
}

void	test_ft_count_if(void)
{
	char *tab[] = { "Hello", "world", "way longer", "a", "little", "yayayay" };
	assert(ft_count_if(tab, 2, test_ft_count_if_is_longer_than_5) == 0);
	assert(ft_count_if(tab, 4, test_ft_count_if_is_longer_than_5) == 1);
	assert(ft_count_if(tab, 6, test_ft_count_if_is_longer_than_5) == 3);
}

int		test_ft_is_sort_diff(int a, int b)
{
	return ((unsigned int)a - (unsigned int)b);
}


void	test_ft_is_sort(void)
{
	{
		int tab[] = { 0, 5, 9, 7, 8, 9 };
		assert(ft_is_sort(tab, sizeof(tab) / sizeof(int), test_ft_is_sort_diff) == 0);
	}
	{
		int tab[] = { 0, 5, 9, 9, 9, 9 };
		assert(ft_is_sort(tab, sizeof(tab) / sizeof(int), test_ft_is_sort_diff) == 1);
	}
	{
		int tab[] = { -13, 5, 9, 9, 10, 9 };
		assert(ft_is_sort(tab, sizeof(tab) / sizeof(int), test_ft_is_sort_diff) == 0);
	}
	{
		int tab[] = { 5, 5, 5, 5, 5, 5 };
		assert(ft_is_sort(tab, sizeof(tab) / sizeof(int), test_ft_is_sort_diff) == 1);
	}
	{
		int tab[] = { 5, 5, 5, -20, -30, -50 };
		assert(ft_is_sort(tab, sizeof(tab) / sizeof(int), test_ft_is_sort_diff) == 1);
	}
	{
		int tab[] = { 5 };
		assert(ft_is_sort(tab, sizeof(tab) / sizeof(int), test_ft_is_sort_diff) == 1);
	}
	{
		int tab[] = {};
		assert(ft_is_sort(tab, sizeof(tab) / sizeof(int), test_ft_is_sort_diff) == 1);
	}
	{
		int tab[] = { 5, 5, 5, -20, -60, -50 };
		assert(ft_is_sort(tab, sizeof(tab) / sizeof(int), test_ft_is_sort_diff) == 0);
	}
}

int		test_ft_sorts_string_tab_size(char *s1, char *s2)
{
	return (strlen(s1) - strlen(s2));
}

int		test_ft_sorts_string_tab_cmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}

void	test_ft_sorts_string_tab_check(int size, char **src, char **expected)
{
	char	*normal[size + 1];
	char	*advanced[size + 1];

	int i = 0;
	while (i <= size)
	{
		normal[i] = src[i];
		advanced[i] = src[i];
		i += 1;
	}
	ft_sort_string_tab(normal);
	ft_advanced_sort_string_tab(advanced, test_ft_sorts_string_tab_cmp);
	i = 0;
	while (i <= size)
	{
		assert(normal[i] == expected[i]);
		assert(advanced[i] == expected[i]);
		i += 1;
	}
}

void	test_ft_sorts_string_tab(void)
{
	{
		char *src[] = { NULL };
		char *expected[] = { NULL };
		test_ft_sorts_string_tab_check(0, src, expected);
	}
	{
		char *src[] = { "lol", NULL };
		char *expected[] = { "lol", NULL };
		test_ft_sorts_string_tab_check(1, src, expected);
	}
	{
		char *src[] = { "lol", "mdr", NULL };
		char *expected[] = { "lol", "mdr", NULL };
		test_ft_sorts_string_tab_check(2, src, expected);
	}
	{
		char *src[] = { "mdr", "lol", NULL };
		char *expected[] = { "lol", "mdr", NULL };
		test_ft_sorts_string_tab_check(2, src, expected);
	}
	{
		char *src[] = { "mdr", "mdr", "mdr", NULL };
		char *expected[] = { "mdr", "mdr", "mdr", NULL };
		test_ft_sorts_string_tab_check(3, src, expected);
	}
	{
		char *src[] = { "mdr", "mdr", "lol", NULL };
		char *expected[] = { "lol", "mdr", "mdr", NULL };
		test_ft_sorts_string_tab_check(3, src, expected);
	}
	{
		char *src[] = { "mdr", "mdr", "lol", NULL };
		char *expected[] = { "lol", "mdr", "mdr", NULL };
		test_ft_sorts_string_tab_check(3, src, expected);
	}
	{
		char *src[] = { "C4VwEi", "F3ZinB085", "iL9", "inkR2HLx3v", "e", "WHhe", "76npT3S", "04A36nKVgE", "xvs65nHjuUfa", "a", "nA", "pnF84GTrHeq", "7DxgAqM", "om", NULL };
		ft_advanced_sort_string_tab(src, test_ft_sorts_string_tab_size);
		for (int i = 0; i <= 14; i += 1)
			printf("%d = %s\n", i, src[i]);
	}
}

int	main(void)
{
	test_ft_foreach();
	test_ft_map();
	test_ft_any();
	test_ft_count_if();
	test_ft_is_sort();
	test_ft_sorts_string_tab();
	return (0);
}
