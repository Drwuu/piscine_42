/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldenis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:17:23 by ldenis            #+#    #+#             */
/*   Updated: 2020/09/19 21:08:48 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ftrlen(char *str)
{
    int i;

    while (str[i])
        i++;
    return (i);
}
int		absent_ligne(int num, char *tab, int ligne_numero)
{
	int i = 0;

	while (tab[ligne_numero][i])
	{
		if (tab[ligne_numerp][i] == num)
			return (1);
		else
			i++;
	}
	return (0);
}

int		absent_colonne(int num, char *tab, int colonne_numero)
{
	int i = 0;

	while (tab[i][colonne_numero])
	{
		if (tab[i][colonne_numero] == num)
			return (1);
		else
			i++;
	}
	return (0);
}

int		fonctionne(int grid[4][4], int pos)
{
	int row;
	int col;
	int nbr;
	
	nbr = 1;
	row = pos / 4;
	col = pos % 4;
	if (pos == 16)
		return (0);
	if (grid[row][col] != 0)
		return (fonctionne(grid, (pos + 1)));
	while (nbr <= 4)
	{
		if ((absent_ligne(nbr, grid, row) == 0) && (absent_colonne(nbr, grid, col)))
		{
			grid[row][col] = nbr;
			if (fonctionne(grid, (pos + 1)))
				return (0);
		}
	}
	grid[row][col] = 0;
	return (1);
}

int     main(int argc, char **argv)
{
    int i;

    i = strlen(argv[1]);
    if (i != 31)
    {
        write(1, "Error\n", 6);
       return (0);
    }

}
