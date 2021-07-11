#include<unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
