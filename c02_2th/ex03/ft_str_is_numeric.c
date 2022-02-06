/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:41:48 by kaizhang          #+#    #+#             */
/*   Updated: 2022/01/20 23:56:27 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
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
	char	str[333];

	scanf("%s", str);
	printf("%d\n", ft_str_is_numeric(str));
	return (0);
}
*/
