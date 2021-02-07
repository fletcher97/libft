/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 10:35:00 by mgueifao          #+#    #+#             */
/*   Updated: 2021/02/06 11:20:13 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*uitoa_rec_s(unsigned int n, int i, int *size)
{
	char *ret;

	if (n == 0)
	{
		if (!(ret = malloc(i + 1)))
			return (NULL);
		*size = i;
		ret[i] = '\0';
		return (ret);
	}
	if ((ret = uitoa_rec_s(n / 10, i + 1, size)) == NULL)
		return (NULL);
	ret[*size - i - 1] = ft_abs(n % 10) + '0';
	return (ret);
}

char		*ft_uitoa(int n)
{
	char	*ret;
	int		size;

	if (n == 0)
	{
		if ((ret = malloc(2)) == NULL)
			return (NULL);
		ret[0] = '0';
		ret[1] = '\0';
		return (ret);
	}
	ret = uitoa_rec_s(n, 0, &size);
	return (ret);
}
