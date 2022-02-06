#include <unistd.h>

int	main(void)
{
	int a;
	int b;

	b = 'z';
	a = 'Y';

	while(a <= 'Y' && a >= 'A' || b <= 'z' && b >= 'b')
	{
		write(1, &b, 1);
		write(1, &a, 1);
		a = a - 2;
		b = b - 2;
	}
	write(1, "\n", 1);
	return (0);
}
