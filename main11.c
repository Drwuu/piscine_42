/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 21:03:47 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/30 22:35:59 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));
int		*ft_map(int *tab, int length, int(*f)(int));
void    ft_putnbr(int nb);
int		ft_any(char **tab, int(*f)(char*));
int		ft_count_if(char **tab, int length, int(*f)(char*));
int 	ft_is_sort(int *tab, int length, int(*f)(int, int));
void    ft_sort_string_tab(char **tab);
void    ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_sqr(int nb)
{
	nb *= nb;
	return (nb);
}

int		ft_sort(int nb1, int nb2)
{
	return ((unsigned int)nb1 - (unsigned int)nb2);
}

int ft_strcmp2(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main()
{
	//int tab[] = {-5, 8, 10, 20, 30, 50};
	//int tab[] = {-5, -3, 10, 20, 30, 50};
	//int tab[] = {-5, -8, 10, 20, 30, 50};
	//int tab[] = {5, 5, 5, -20, -30, -50};
	//int tab[] = {5, 5, 5, -20, -30, -20};
	//int tab[] = {10, 9, 9, 8, 5, 2};
	//int tab[] = {10, 11, 9, 8, 5, 2};
	//ft_foreach(tab, 4, &ft_putnbr);
	/*
	int *tab2 = ft_map(tab, 4, &ft_sqr);
	int i = 0;
	while (i < 4)
		printf("%d\n", tab2[i++]);
	free(tab2);
	*/
	//char *strs[5] = {"1", "", "popo", "goku", NULL};
	
	//printf("%d\n", ft_any(strs, &ft_strlen));
	
	//printf("%d\n", ft_count_if(strs, 4, &ft_strlen));
	
	//printf("%d\n", ft_is_sort(tab, 6, &ft_sort));
	
	char *tab[14] = {"R3By", "Z", "sQyVgi", "u9G65i1", "uJ2vHXfG6", "JiLjh3Ny6", "D", "LkUzRaO1", "83I9", "Cy4W", "YcoIS", "M60", "x2Pn", 0};
	//char *tab[5] = {"adfbfljbel", "ad;elwfj;wj", "a;jrtg;", "aljrle", NULL};
	//char *tab[5] = {"adfbfljbel", "ad;elwfj;wj", "a;jrtg;", "aljrle", NULL};
	//char *tab[] = { "mdr", "lol", NULL };
	int i = 0;
	while (i < 13)
	{
		printf("tab %d before = %s\n", i, tab[i]);
		i++;
	}
	
	//ft_sort_string_tab(tab);
	ft_advanced_sort_string_tab(tab, &ft_strcmp2);
	i = 0;
	while (i < 13)
	{
		printf("advanced tab %d after = %s\n", i, tab[i]);
		i++;
	}
}
