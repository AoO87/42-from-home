#include<unistd.h>

void	write_comma(char a);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write_comma(a);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	write_comma(char a)
{
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}
