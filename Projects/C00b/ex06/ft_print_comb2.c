#include<unistd.h>

void	display_digit(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			display_digit((a / 10) + '0');
			display_digit((a % 10) + '0');
			write(1, " ", 1);
			display_digit((b / 10) + '0');
			display_digit((b % 10) + '0');
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
