/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:34:57 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/19 19:55:54 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 65 && str [i] <= 90)
		{
			str [i] = str [i] + 32;
		}
		i++;
	}	
	return (str);
}
/*
int	main(void)
{
	char	str[111];

	scanf("%s", str);
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
*/
