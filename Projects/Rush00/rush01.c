#include <unistd.h>

void	ft_putchar(char c);
void	printrow(int y, char a, char b, char c);

void	printrow(int y, char a, char b, char c)
{
	int	counter;

	counter = 1;
	while (counter <= y)
	{
		if (counter == 1)
		{
			ft_putchar(a);
		}
		else if (counter == y)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(b);
		}
		counter++;
	}
}
void	rush(int x, int y)
{
	int	xc;

	xc = 1;
	while (xc <= x)
	{
		if (xc == 1)
		{
			printrow(y, '/', '*', '\\');
		}
		else if (xc == x)
		{
			printrow(y, '\\', '*', '/');
		}
		else
		{
			printrow(y, '*', ' ', '*');
		}
		xc++;
		ft_putchar('\n');
	}
}