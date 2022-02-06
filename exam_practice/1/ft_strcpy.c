#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while( s1[i] != 0)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s1);
}

int	main(void)
{
	char s1[100] = "abc";
	char s2[0] = "";

	printf("%s\n", ft_strcpy(s1, s2));
	printf("%s", strcpy(s1, s2));
	return (0);
}
