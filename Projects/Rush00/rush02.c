#include <unistd.h>

void	ft_putchar(char c);
void	printrow(int y, char a, char b, char c);
void	rush(int x, int y)
{
	int	xc;

	xc = 1;
	while (xc <= x)
	{
		if (xc == 1)
		{
			printrow(y, 'A', 'B', 'A');
		}
		else if (xc == x)
		{
			printrow(y, 'C', 'B', 'C');
		}
		else
		{
			printrow(y, 'B', ' ', 'B');
		}
		xc++;
		ft_putchar('\n');
	}
}

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
