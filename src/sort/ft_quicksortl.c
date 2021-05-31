/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksortl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgueifao <mgueifao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 00:22:34 by mgueifao          #+#    #+#             */
/*   Updated: 2021/05/31 01:47:49 by mgueifao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	swapqs(long *first, long *second)
{
	long temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

static int partitionqs(long arr[], int lower, int upper)
{
	int i;
	long pivot;
	int j;

	i = (lower - 1);
	pivot = arr[upper];
	j = lower - 1;
	while (++j < upper)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swapqs(&arr[i], &arr[j]);
		}
	}
	swapqs(&arr[i + 1], &arr[upper]);
	return (i + 1);
}

void quicksorti(long arr[], int lower, int upper)
{
	if (upper > lower) {
		int partitionIndex = partitionqs(arr, lower, upper);
		quickSort(arr, lower, partitionIndex - 1);
		quickSort(arr, partitionIndex + 1, upper);
	}
}
