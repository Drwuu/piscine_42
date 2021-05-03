/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possibilities.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:01:46 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/20 16:10:51 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int     **malloc_double_array(int **arr, int size1, int size2);

char 	**create_table(char **table)
{
    table = malloc_double_array(table, 24, 6);
    table[0][0] = 4;
    table[0][1] = 1;
	return (table);
}

int 	main ()
{
	char **table;

	table = create_table(table);
    printf("Table 0 = %d %d %d %d %d %d\n", table[0][0], table[0][1], table[0][2], table[0][3], table[0][4], table[0][5]);
}
