/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 21:00:15 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/30 21:20:24 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_seen(char *str, char c, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int size_s1;

	size_s1 = ft_strlen(s1);
	write(1, &s1[0], 1);
	i = 1;
	while (s1[i])
	{
		if (!is_seen(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!is_seen(s1, s2[i], size_s1) && !is_seen(s2, s2[i], i))
			write(1, &s2[i], 1);
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac != 3)
		return (0);
	ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
