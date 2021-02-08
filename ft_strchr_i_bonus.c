/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_i_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:35:16 by mgueifao          #+#    #+#             */
/*   Updated: 2021/02/08 08:58:59 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr_i(const char *str, const char c)
{
	char	*pos;

	if (!ft_set64((int64_t *)&pos, (int64_t)ft_strchr(str, c)))
		return (-1);
	return (pos - str);
}
