/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karakhirn <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 22:37:56 by karakhirn         #+#    #+#             */
/*   Updated: 2015/05/26 23:09:58 by karakhirn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>

static cmp(int a, int b)
{
	if (a > b)
		return (1);
	return (0);
}

int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	t_list *d;
	t_list *e;
	t_list *f;
	t_list *g;
	t_list *h;
	t_list *bkp;

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	c = malloc(sizeof(t_list));
	d = malloc(sizeof(t_list));
	e = malloc(sizeof(t_list));
	f = malloc(sizeof(t_list));
	g = malloc(sizeof(t_list));
	h = malloc(sizeof(t_list));
	
	a->data = 20;
	b->data = 18;
	c->data = 16;
	d->data = 17;
	e->data = 13;
	f->data = 45;
	g->data = 15;
	h->data = 10;

	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;
	e->next = f;
	f->next = g;
	g->next = h;
	h->next = NULL;

	bkp = a;
	while (bkp->next)
	{
		printf("%d\n", bkp->data);
		bkp = bkp->next;
	}
	sort_list(a, &cmp);
	printf("\n triee \n");
	while (a->next)
	{
		printf("%d\n", a->data);
		a = a->next;
	}
	return (0);
}
