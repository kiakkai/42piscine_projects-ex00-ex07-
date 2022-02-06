/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjezukai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:24:30 by mjezukai          #+#    #+#             */
/*   Updated: 2022/01/15 14:39:41 by mjezukai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printfirst(int b)
{
	int	a;

	a = 1;
	while (a <= b)
	{
		if (a == 1)
		{
			write (1, "o", 1);
			if (a == b)
			{
				write (1, "\n", 1);
			}
		}
		if (a == b && a != 1)
		{
			write (1, "o", 1);
			write (1, "\n", 1);
		}
		if (a != 1 && a != b)
		{
			write(1, "-", 1);
		}
		a ++;
	}
}

void	printmid(int b)
{
	int	a;

	a = 1;
	while (a <= b)
	{
		if (a == 1)
		{
			write (1, "|", 1);
			if (a == b)
			{
				write (1, "\n", 1);
			}
		}
		if (a == b && a != 1)
		{
			write (1, "|\n", 2);
		}
		if (a != 1 && a != b)
		{
			write(1, " ", 1);
		}
		a ++;
	}
}

void	printlast(int b)
{
	int	a;

	a = 1;
	while (a <= b)
	{
		if (a == 1)
		{
			write (1, "o", 1);
			if (a == b)
			{
				write (1, "\n", 1);
			}
		}
		if (a == b && a != 1)
		{
			write (1, "o\n", 2);
		}
		if (a != 1 && a != b)
		{
			write(1, "-", 1);
		}
		a ++;
	}
}

void	rush(int a, int b)
{
	int	c;

	c = 1;
	while (c <= b)
	{
		if (c == 1)
		{
			printfirst (a);
		}
		if (c == b && c != 1)
		{
			printlast (a);
		}
		if (c != 1 && c != b)
		{
			printmid (a);
		}
		c ++;
	}
}
