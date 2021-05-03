/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 14:34:13 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/29 10:06:27 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
#include "ft_boolean.h"

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
t_bool ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}
*/

#include "ft_stock_str.h"

int main(int ac, char **av)
{
	t_stock_str *struc;
	struc = ft_strs_to_tab(ac, av);
	ft_show_tab(struc);
	return (0);
}
