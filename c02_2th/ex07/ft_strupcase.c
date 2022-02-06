/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:19:04 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/19 19:55:01 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 97 && str [i] <= 122)
		{
			str [i] = str [i] - 32;
		}
		i++;
	}	
	return (str);
}
/*
int	main(void)
{
	char	str[10000];

	scanf("%s", str);
	printf("%s\n", ft_strupcase(str));
	return (0);
}
*/
