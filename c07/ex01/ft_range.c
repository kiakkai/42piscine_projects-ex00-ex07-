/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:30:47 by kaizhang          #+#    #+#             */
/*   Updated: 2022/02/06 16:31:26 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
int	main(void)
{
	int *range;
	int i;
	int min;
	int max;
	int nbr;
	
	i = 0;
	min = 2;
	max = 9;
	nbr = max - min;
	range = ft_range(min, max);
	while(i < nbr )
	{
		printf("%d ,", range[i]);
		i++;
	}
	return (0);
}
*/
