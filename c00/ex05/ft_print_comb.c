/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wezhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:18:01 by wezhang           #+#    #+#             */
/*   Updated: 2022/01/20 22:36:31 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	while (++a <= 7)
	{
		b = a;
		while (++b <= 8)
		{
			c = b;
			while (++c <= 9)
			{
				ft_putchar (char(a % 10) + '0')
				ft_putchar ((b % 10) + '0');
				ft_putchar ((c % 10) + '0');
				if (a != 7)
				{
					ft_putchar (',');
					ft_putchar (' ');
				}
			}
		}
	}
}

int main(void)
{
	ft_print_comb();
}
