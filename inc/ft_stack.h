/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 00:46:07 by mgueifao          #+#    #+#             */
/*   Updated: 2021/05/16 01:36:09 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include <stddef.h>

typedef struct s_stack_elem
{
	void				*content;
	struct s_stack_elem	*prev;
}				t_stack_elem;

typedef struct s_stack
{
	size_t			size;
	t_stack_elem	*top;
}				t_stack;

t_stack	*ft_stacknew(void *content);
void	*ft_stackpeek(t_stack *stack);
void	*ft_stackpop(t_stack *stack);
void	ft_stackpush(t_stack *stack, void *content);
size_t	ft_stacksize(t_stack *stack);

#endif
