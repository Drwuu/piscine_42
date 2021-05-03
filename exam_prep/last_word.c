/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 21:49:09 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/30 23:21:41 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

void	write_last_word(char *av)
{
	int i;

	i = ft_strlen(av) - 1;
	while (is_space(av[i]) && i >= 0)
		i--;
	while (!is_space(av[i]) && i >= 0)
		i--;
	i++;
	while (!is_space(av[i]) && av[i])
		write(1, &av[i++], 1);
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		write_last_word(av[1]);
	return (0);
}
