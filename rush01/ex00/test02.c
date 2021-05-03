/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 13:45:43 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/19 17:56:34 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		catch_error(int argc, char **argv)
{
	int i;
	int len;

	if (argc != 2)
		return (1);
	len = ft_strlen(argv[1]);
	if (len != 31)
		return (1);
	i = 0;
	while (argv[1][i])
	{
		if (i % 2 == 0 && !(argv[1][i] >= '1' && argv[1][i] <= '4'))
			return (1);
		if (i % 2 == 1 && argv[1][i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

void	initialize_array(char *str)
{
	while (*str)
	{
		*str = 0;
		str++;
	}
}

char 	*catch_grid_borders(char *argv, int index, int limit)
{
	char *str;
	int i;
	int j;

	i = index;
	j = 0;
	str = malloc((sizeof (char) * 8) + 1);
	if (str == NULL)
		exit(0); // droit au exit ??
	while (i < limit)
	{
		if (i % 2 == 0)
		{
			str[j] = argv[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

void	process(char **argv)
{
}

int		main(int argc, char **argv)
{
	if(catch_error(argc, argv))
	{
		write(1, "Error", 5);
		return (0);
	}
	printf("col = %s\n", catch_grid_borders(argv[1], 0, 15));
	printf("row  = %s\n", catch_grid_borders(argv[1], 16, 32));
	//printf("argv = %s\n", argv[1]);
	//printf("%s\n", catch_row(argv[1]));

	free(catch_grid_borders(argv[1], 0, 15));
	return (0);
}
