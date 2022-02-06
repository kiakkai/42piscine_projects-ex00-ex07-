/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdubey <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:46:31 by hdubey            #+#    #+#             */
/*   Updated: 2022/01/22 20:03:10 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	char	*reserve_dest;

	reserve_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (reserve_dest);
}

int main(void)
{
	char source[] = "Victor the winner!!";
	char destination[25];
	//destination = "i";
	printf("%s\n",  ft_strcpy(destination, source));
	//printf("Destination = %s\n",destination);
	return 0;
}
