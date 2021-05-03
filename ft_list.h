/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 22:26:52 by lwourms           #+#    #+#             */
/*   Updated: 2020/09/29 23:53:58 by lwourms          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct		s_list *next;
	void		*data;
} 				t_list;

t_list *ft_create_elem(void *data);

#endif
