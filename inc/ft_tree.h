/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:43:25 by mgueifao          #+#    #+#             */
/*   Updated: 2021/10/16 21:14:10 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TREE_H
# define FT_TREE_H

# include "ft_list.h"

typedef struct s_tree
{
	char	*key;
	t_list	*content;
	t_list	*leafs;
}				t_tree;

t_tree	*ft_treenew(char *key, void *content);

#endif
