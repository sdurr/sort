/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 09:48:44 by exam              #+#    #+#             */
/*   Updated: 2015/05/13 10:07:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *begin;
	t_list *first;
	int tmp;

	if (lst == NULL)
		return (lst);
	first = lst;
	begin = lst;
	if (lst->next != NULL)
		lst = lst->next;
	while (first->next != NULL)
	{
		if ((*cmp)(first->data, lst->data) == 0)
		{
			tmp = first->data;
			first->data = lst->data;
			lst->data = tmp;
			first = begin;
			lst = begin;
			lst = lst->next;
		}
		else
		{
			lst = lst->next;
			first = first->next;		
		}

	}
	lst = begin;
	return (lst);
}
