/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 21:39:33 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/28 23:46:06 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <unistd.h>

void	init_tab_f(int(*tab[])(int, int))
{
	tab[0] = &add;
	tab[1] = &substract;
	tab[2] = &divide;
	tab[3] = &multiply;
	tab[4] = &module;
	tab[5] = 0;
}

int (*find_function(char **str, int(*tab[])(int, int)))(int ,int)
{
	if (str[2][0] == '+')
		return (tab[0]);
	if (str[2][0] == '-')
		return (tab[1]);
	if (str[2][0] == '/')
		return (tab[2]);
	if (str[2][0] == '*')
		return (tab[3]);
	if (str[2][0] == '%')
		return (tab[4]);
	else
		return (tab[5]);
}

int		do_op(char **av)
{
	int (*tab_f[6])(int, int);
	int (*f)(int, int);

	init_tab_f(tab_f);
	f = find_function(av, tab_f);
	if (f != 0)
		return (f(ft_atoi(av[1]), ft_atoi(av[3])));
	else
		return (0);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (av[3][0] == '0' && av[2][0] == '/')
		write(1, "Stop : division by zero", 23);
	else if (av[3][0] == '0' && av[2][0] == '%')
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(do_op(av));
	write(1, "\n", 1);
	return (0);
}
