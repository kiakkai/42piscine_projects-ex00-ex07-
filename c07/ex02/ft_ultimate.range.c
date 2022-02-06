f (min >= max)
 23     {/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate.range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:31:41 by kaizhang          #+#    #+#             */
/*   Updated: 2022/02/06 16:33:28 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * len);
	if (!*range)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (len);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	len;
	int	i;

	i = 0;
	min = 2;
	max = 9;
	len = ft_ultimate_range(&range, 2, 9);
	while( i < len)
	{
		printf("%d, ", range[i]);
		i++;
	}
	return (0);
}
*/
