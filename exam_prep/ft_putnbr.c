/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:33:51 by lwourms           #+#    #+#             */
/*   Updated: 2020/10/01 17:25:44 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	ll_nb;
	char	nbr;

	ll_nb = nb;
	if (ll_nb < 0)
	{
		write(1, "-", 1);
		ll_nb *= -1;
	}
	if (ll_nb > 9)
		ft_putnbr(ll_nb / 10);
	nbr = (ll_nb	% 10) + '0';
	write(1, &nbr, 1);
}

int		main()
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-18);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	return (0);
}
