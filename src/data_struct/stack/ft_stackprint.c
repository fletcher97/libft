/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 19:18:50 by mgueifao          #+#    #+#             */
/*   Updated: 2021/05/30 07:44:08 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"
#include "ft_stdlib.h"
#include "ft_stdio.h"
#include "ft_conv.h"

void ft_stackprint(t_stack *s, char *(*toString)(void *), char* delim)
{
	t_stack_elem *ele;
	char *ptr_string;

	if (!s)
		return;
	ele = s->top;
	if (toString && ele)
		ft_putstr_fd(toString(ele->content), 1);
	else if (ele)
	{
		ptr_string = ft_ultoa_base((unsigned long)ele->content, HEX_U);
		ft_putstr_fd(ptr_string, 1);
		ft_free(ptr_string);
	}
	while (ele->prev)
	{
		ele = ele->prev;
		ft_putstr_fd(delim, 1);
		if (toString)
			ft_putstr_fd(toString(ele->content), 1);
		else
		{
			ptr_string = ft_ultoa_base((unsigned long)ele->content, HEX_U);
			ft_putstr_fd(ptr_string, 1);
			ft_free(ptr_string);
		}
	}
	ft_putstr_fd("\n", 1);
}
