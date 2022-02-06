/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:19:12 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/16 22:59:04 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		*a = div;
		*b = mod;
	}
}
/*
int	main(void)
{
	int	*y;
	int	*z;
	int	h;
	int	i;

	h = 42;
	i = 24;
	y = &h;
	z = &i;
	ft_ultimate_div_mod(y, z);
	printf("div is : %d\n", *y);
	printf("mod is : %d\n", *z);
	return (0);
}
*/
