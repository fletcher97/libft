/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 01:21:18 by mgueifao          #+#    #+#             */
/*   Updated: 2021/02/13 13:50:52 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "ft_list.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	lst->content = NULL;
	lst->next = NULL;
	free(lst);
}
