/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:29:05 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/16 22:58:09 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{	
	int	x;
	int	y;
	int	*h;
	int	*i;

	x = 42;
	y = 24;
	h = &x;
	i = &y;
	ft_div_mod(x, y, h, i);
	printf("div is: %d\n", *h);
	printf("mod is: %d\n", *i);
	return (0);
}
*/
