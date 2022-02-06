/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:27:08 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/25 15:57:43 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*a = "abc";
	char	*b = "abb";
	unsigned int	n;
	
	n = 3;
	printf("a - b is : %d\n", ft_strncmp(a, b, n));
	printf("\na - b is : %d\n", strncmp(a, b, n));
	return (0);
}
*/
