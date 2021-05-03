/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 16:09:07 by lwourms           #+#    #+#             */
/*   Updated: 2020/10/01 16:29:22 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

int		is_prime(int nb)
{
	long i;

	if (nb <= 1)
		return (0);
	//if (nb == 2 || nb == 3)
	//	return (1);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main (int ac, char **av)
{
	printf("%d\n", is_prime(17));
}
