/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:14:21 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/25 22:44:48 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{	
	int	x;
	int	*ptr;
	int	**ptr_1;
	int	***ptr_2;
	int	****ptr_3;
	int	*****ptr_4;
	int	******ptr_5;
	int	*******ptr_6;
	int	********ptr_7;
	int	*********           ptr_8;

	x = 24;
	ptr = &x;
	ptr_1 = &ptr;
	ptr_2 = &ptr_1;
	ptr_3 = &ptr_2;
	ptr_4 = &ptr_3;
	ptr_5 = &ptr_4;
	ptr_6 = &ptr_5;
	ptr_7 = &ptr_6;
	ptr_8 = &ptr_7;
	printf("x was :	%d\n", x);
	ft_ultimate_ft(ptr_8);
	printf("now x is : %d\n", ft_ultimate_ft(ptr_8));
	return (0);
}

