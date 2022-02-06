/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:21:12 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/24 23:15:00 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<string.h>
#include <stdio.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
					j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[50] = "hi!hello";
	char	to_find[50] = "hello";

	printf("after: %s\n", ft_strstr(str, to_find));
	printf("after: %s\n", strstr(str, to_find));
	return (0);
}
*/
