/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 00:15:51 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/30 20:03:57 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_elem;
	t_list *save;

	save = *begin_list;
	new_elem = ft_create_elem(data);
	while (save->next)
		save = save->next;
	save->next = new_elem;
}
