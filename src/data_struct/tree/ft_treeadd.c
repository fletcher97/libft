/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:06:17 by mgueifao          #+#    #+#             */
/*   Updated: 2021/10/16 21:18:24 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tree.h"

int	ft_treeadd(t_tree *tree, void *content)
{
	t_list	*new;

	new = ft_lstnew(content);
	if (!new)
		return (0);
	ft_lstadd_back(&(tree->content), new);
	return (1);
}
