#include <unistd.h>

void	str_limit(char *str);
{
	char *src;
	char *dest;
	int i;

	i = 0;
	while(str != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*rev_alpha(char *str)
{	
	char src;
	str = str_limit(src);
	
