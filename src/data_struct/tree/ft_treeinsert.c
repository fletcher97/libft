/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:16:41 by mgueifao          #+#    #+#             */
/*   Updated: 2021/10/16 21:17:39 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tree.h"

int	ft_treeinsert(t_tree *tree, char *key, void *content)
{
	t_tree	*new;

	new = ft_treenew(key, content);
	if (!new)
		return (0);
	ft_lstadd_back(&(tree->leafs), new);
	return (1);
}
