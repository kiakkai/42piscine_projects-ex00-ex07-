/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:51:33 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/24 20:56:15 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	h;

	i = 0;
	h = 0;
	while (dest[h] != 0)
	{
		h++;
	}
	while (src[i] != 0)
	{
		dest[h] = src[i];
		i++;
		h++;
	}
	dest[h] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "kai!";
	char	b[] = "hello!";

	printf("now b is %s\n", ft_strcat(b, a));
	return (0);
}
*/
