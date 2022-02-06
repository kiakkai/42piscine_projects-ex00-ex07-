#include <unistd.h>
void putnbr(int c)
{
	char x;

	x = c + '0';
	if (c >= 10)
	{
		putnbr(c / 10);
		putnbr(c % 10 );
	}
	write(1, &x, 1);
}
		

int	main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			putnbr(i);
			i++;
		write(1, "\n", 1);
	}
}
