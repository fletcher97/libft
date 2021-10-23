/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treeadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:06:17 by mgueifao          #+#    #+#             */
/*   Updated: 2021/10/22 21:28:53 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tree.h"

int	ft_treeadd(t_tree *tree, void *key, void *content)
{
	t_tree	*new;

	new = ft_treenew(key, content);
	if (!new)
		return (0);
	ft_realloc(tree->leafs, tree->lcount + 1);
	tree->leafs[tree->lcount++] = new;
	return (1);
}
