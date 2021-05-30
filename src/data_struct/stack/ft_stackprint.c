/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 19:18:50 by mgueifao          #+#    #+#             */
/*   Updated: 2021/05/30 04:06:42 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"
#include "ft_stdio.h"
#include "ft_conv.h"



void ft_stackprint(t_stack *s, char *(*toString)(void *), char* delim)
{
	t_stack_elem *ele;

	if (!s)
		return;
	ele = s->top;
	if (toString)
		ft_putstr_fd(toString(ele->content), 1);
	else
		ft_putstr_fd(ft_ultoa_base((unsigned long)ele->content, HEX_U), 1);
	while (ele)
	{
		ft_putstr_fd(delim, 1);
		if (toString)
			ft_putstr_fd(toString(ele->content), 1);
		else
			ft_putstr_fd(ft_ultoa_base((unsigned long)ele->content, HEX_U), 1);
	}
	ft_putstr_fd("\n", 1);
}
