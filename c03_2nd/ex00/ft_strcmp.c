/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:21:38 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/24 20:24:40 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*a = "abc";
	char	*b = "abd";
	
	if (ft_strcmp(a, b) < 0)
		printf("The value of a is less than b");
	else
		printf("The value of a is greater or equal to b");
		printf("\nbtw print out the exactly value %d\n", ft_strcmp(a,b));
	return (0);
}
*/
