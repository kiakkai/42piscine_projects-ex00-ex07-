/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:06:16 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/21 00:00:34 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str [i] > 127)
		{
			return (0);
		}
		i++;
	}	
	return (1);
}
/*
int	main(void)
{
	char	str[111];

	scanf("%s", str);
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}
*/
