/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 13:03:18 by mgueifao          #+#    #+#             */
/*   Updated: 2021/02/06 13:30:14 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int i;

	if (!str)
		return (NULL);
	i = ft_strlen(str) -1;
	while (i > 0)
	{
		ft_swap(str, str + i, 1);
		str++;
		i -= 2;
	}
	return (str);
}
