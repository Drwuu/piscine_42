/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 08:45:53 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/29 17:33:39 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char    *ft_strdup(char *src);
int 	*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char    *ft_strjoin(int size, char **strs, char *sep);
char    *ft_convert_base(char *nbr, char *base_from, char *base_to);
char 	**ft_split(char *str, char *charset);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        ft_putchar(str[i++]);
}

int main(int ac, char **av)
{
	//printf("%s\n", ft_strdup("Bonjour comment allez vous ? hohoohohohoh"));
	
/*	long i = 0;
	int *tab;
	tab = ft_range(-214748364, 214748364);
	while (i < 2147)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
*/

/*
	int **range = 0;
	int j = 0;
	int i = 0;
	range = (int **)malloc(sizeof(int *) * 2);
	range[0] = (int *)malloc(sizeof(int) * 6);
	while (i < 6)
    {
		range[0][j] = i;
		printf("%d\n", range[0][j]);
        i++;
		j++;
    }
	printf("%d\n", ft_ultimate_range(range, 0, 5));
*/

/*	char *sep = "***___***";
	printf("%s\n", ft_strjoin(ac, av, sep));
	//(void)ac;
	//(void)av;
	//char *strs[4] = { "This", "is", "a", "sentence" };
	//char *str = ft_strjoin(1, strs, " ");
	//printf("%s\n", str);
	//free(str);
*/
/*
	char *str = "0";
	(void)ac;
	(void)av;
	char *f_str = ft_convert_base(str, "0123456789", "0123456789");
	printf("%s\n", f_str);
	free(f_str);
	return (0);
*/

	(void)ac;
	(void)av;
	int i = 0;
    char **tab = ft_split("je veux manger", " ");
    while (tab[i])
    {
        //ft_putstr(tab[i]);
        printf("%s\n", tab[i]);
		
		i++;
    }
	free(tab);
	return (0);
}
