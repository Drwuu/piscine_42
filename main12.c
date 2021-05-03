#include "ft_list.h"
#include <stdio.h>

void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);
void ft_list_push_back(t_list **begin_list, void *data);

int main()
{
	t_list *begin;
	t_list *save;
	t_list *elem01;
	t_list *elem02;
	t_list *elem03;

	elem01 = ft_create_elem("Goku");
	//elem02 = ft_create_elem("Bulma");
	//elem03 = ft_create_elem("Babidi");
	begin = elem01;
	
	// Test parcours d'elements chaines
	/*
	elem01->next = elem02;
	elem02->next = elem03;
	while (begin)
	{
		printf("%s\n", begin->data);
		begin = begin->next;
	}
	*/

	// Test push front
	ft_list_push_front(&begin, "Vegeta");
	ft_list_push_front(&begin, "Gohan");
	ft_list_push_front(&begin, "Krilin");
	save = begin;
	while (begin)
	{
		printf("element = %s\n", begin->data);
		begin = begin->next;
	}
	begin = save;

	// Test Size
	printf("Last id = %d\n", ft_list_size(begin));

	// Test last
	printf("last element = %s\n", ft_list_last(begin)->data);

	// Test push back
	ft_list_push_front(&begin, "Vegeta");
	ft_list_push_front(&begin, "Gohan");
	ft_list_push_front(&begin, "Krilin");
	save = begin;
	while (begin)
	{
		printf("element = %s\n", begin->data);
		begin = begin->next;
	}
	begin = save;
}
