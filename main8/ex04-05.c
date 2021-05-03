#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);
void		ft_show_tab(t_stock_str *par);

void		ft_test_strs_to_tab_inner(int ac, char **av)
{
	t_stock_str *result = ft_strs_to_tab(ac, av);
	t_stock_str *result_cpy = result;

	ft_show_tab(result);

	while (ac--)
	{
		assert(result_cpy->str != result_cpy->copy);
		assert((int)strlen(result_cpy->str) == result_cpy->size);
		assert(strcmp(result_cpy->str, result_cpy->copy) == 0);
		free(result_cpy->copy);
		av += 1;
		result_cpy += 1;
	}
	assert(result_cpy->str == NULL);
	//free(result);
}

void		ft_test_strs_to_tab(void)
{
	{
		char *strs[4] = { "Hello", "world", "this is a long sentence", NULL };
		ft_test_strs_to_tab_inner(3, strs);
	}
	{
		char *strs[3] = { "Hello", "world", "this is a long sentence" };
		ft_test_strs_to_tab_inner(3, strs);
	}
	{
		char *strs[2] = { "Hello", "world" };
		ft_test_strs_to_tab_inner(2, strs);
	}
	{
		char *strs[1] = { "Hello" };
		ft_test_strs_to_tab_inner(1, strs);
	}
	{
		char *strs[0] = { };
		ft_test_strs_to_tab_inner(0, strs);
	}
}

int			main(void)
{
	ft_test_strs_to_tab();
}
