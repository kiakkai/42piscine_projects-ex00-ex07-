/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:35:40 by kaizhang          #+#    #+#             */
/*   Updated: 2022/02/01 21:13:51 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src [i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	a [85] = "hello";
	char	b [58] = "";

	printf("b was: %s\n", b);
	ft_strcpy(b, a);
	printf("now b is : %s\n", b);
	return (0);
}

