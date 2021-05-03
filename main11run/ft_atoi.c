/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 12:38:18 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/17 19:36:21 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	process(char *str, int i)
{
	int nbr;

	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	return (nbr);
}

int	ft_atoi(char *str)
{
	int i;
	int neg;

	i = 0;
	neg = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = (!neg) ? 1 : 0;
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	if (neg)
		return (process(str, i) * -1);
	else
		return (process(str, i));
}
