/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:01:08 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/20 23:59:01 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] < 'A' || str [i] > 'Z')
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
	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}
*/
