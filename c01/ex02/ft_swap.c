/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:02:55 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/16 22:56:29 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	*y;
	int	*z;

	i = 10;
	j = 20;
	y = &i;
	z = &j;
	ft_swap(y, z);
	printf("i was 10 but it is: %d\n", i);
	printf("j was 20 but it is: %d\n", j);
	return (0);
}
*/
