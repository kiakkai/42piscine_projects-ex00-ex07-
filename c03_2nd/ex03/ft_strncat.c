/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:57:05 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/24 21:36:36 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	h;

	i = 0;
	h = 0;
	while (dest[h] != '\0')
		h++;
	while (src[i] != '\0' && i < nb)
	{
		dest[h + i] = src[i];
		i++;
	}
	dest[h + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	b[50] = "hello!";
	char	a[50] = "kai zhang!";
	unsigned int	nb;

	nb = 10;
	printf("now b is %s\n", ft_strncat(b, a, nb));
	return (0);
}
*/
