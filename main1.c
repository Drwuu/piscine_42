#include "c01/ex00/ft_ft.c"
#include "c01/ex07/ft_rev_int_tab.c"
#include "c01/ex08/ft_sort_int_tab.c"
#include <stdio.h>

int		main()
{
	/*
	 * ft_rev
	int i = 0;
	int size = 15;
	int str[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15};
	ft_rev_int_tab(str, size);
	while(i < size)
	{
		printf("rev tab 1 = %d\n", str[i]);
		i++;
	}
	*/

	/* 
	 * ft_ft
	int b = 10;
	int *pb = &b;
	ft_ft(pb);
	printf("Pointeur = %d", *pb);
	return(0);
	*/


	int i = 0;
	int size = 13;
	int str[13] = {10, 255, 3, -10, 0, -1564, 50, 87, 89, 78, 5, 34, 100};
	ft_sort_int_tab(str, size);
	while(i < size)
	{
		printf("sort tab = %d\n", str[i]);
		i++;
	}

}
