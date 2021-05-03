/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 20:39:24 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/13 15:05:43 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int match;
	
	i = 0;
	j = 0;
	match = 0;
	while (str[i])
	{
		if (to_find[j] == str[i])
			match = 1;
		else
			match = 0;
		if (match)
		{
			to_find[j] = str[i];
			j++;
		}
		else if (to_find[j] == '\0')
		{
			to_find[j] = str[i];
			j++;
		}
		i++;
	}
	to_find[i] = '\0';
	return (to_find);
}
