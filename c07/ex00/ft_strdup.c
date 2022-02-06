/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:16:22 by kaizhang          #+#    #+#             */
/*   Updated: 2022/02/06 17:30:38 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;

	c = (char *)malloc(sizeof (*src));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

int	main(void)
{
	char src[8] = "abcdefg";
	char *dest;
	
	dest = malloc(sizeof(*src));
	printf("%s\n", ft_strdup(src));
	return (0);
}

