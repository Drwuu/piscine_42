/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:09:14 by lwourms           #+#    #+#             */
/*   Updated: 2020/10/01 17:42:45 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		find_size(long nb)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	return (i + 1);
}

void	fill_recursively(long l_nb, char *str, int i)
{
	if (l_nb < 0)
	{
		l_nb *= -1;
		str[0] = '-';
	}
	if (l_nb > 9)
		fill_recursively(l_nb / 10, str, i - 1);
	str[i] = (l_nb % 10) + '0';
}

char	*ft_itoa(int nb)
{
	int f_size;
	long l_nb;
	char *f_str;

	l_nb = nb;
	f_size = find_size(l_nb);
	if (!(f_str = malloc(sizeof(char) * f_size + 1)))
		return (0);
	fill_recursively(l_nb, f_str, f_size - 1);
	f_str[f_size] = '\0';
	return (f_str);
}

int main()
{
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}
