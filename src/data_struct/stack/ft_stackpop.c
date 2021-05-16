/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 01:14:57 by mgueifao          #+#    #+#             */
/*   Updated: 2021/05/16 01:36:33 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	*ft_stackpop(t_stack *stack)
{
	void			*ret;
	t_stack_elem	*tmp;

	tmp = stack->top;
	stack->top = stack->top->prev;
	stack->size--;
	ret = tmp->content;
	ft_free(tmp);
	return (ret);
}
