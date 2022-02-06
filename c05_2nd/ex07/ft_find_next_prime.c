/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:05:15 by kaizhang          #+#    #+#             */
/*   Updated: 2022/02/02 11:08:32 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("next prime number is? %d\n", ft_find_next_prime(0));
	printf("next prime number is? %d\n", ft_find_next_prime(-4));
	printf("next prime number is? %d\n", ft_find_next_prime(2));
	printf("next prime number is? %d\n", ft_find_next_prime(4));
	printf("next prime number is? %d\n", ft_find_next_prime(5));
	printf("next prime number is? %d\n", ft_find_next_prime(6));
	printf("next prime number is? %d\n", ft_find_next_prime(7));
	return (0);
}
*/
