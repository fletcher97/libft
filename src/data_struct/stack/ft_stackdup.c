/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:56:48 by mgueifao          #+#    #+#             */
/*   Updated: 2021/05/30 04:02:52 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_stack.h"

static void populate(t_stack_elem **dest, t_stack_elem *src, void *(*d)(void *))
{
	if (!src)
		return;
	*dest = ft_malloc(sizeof(t_stack_elem));
	if (d)
		(*dest)->content = d(src->content);
	else
		(*dest)->content = src->content;
	populate(&((*dest)->prev), src->prev, d);
}

t_stack *ft_stackdup(t_stack *o, void *(*dup)(void *))
{
	t_stack *ret;

	if (!o)
		return (NULL);
	ret = ft_malloc(sizeof(t_stack));
	if (!ret)
		return (NULL);
	populate(&(ret->top), o->top, dup);
	ret->size = o->size;
	return (ret);
}
