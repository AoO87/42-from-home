#include<unistd.h>
void	ft_putchar(char c);
void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(0);
	return(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
		nb = -(nb / 10);
		ft_putnbr(nb);
		ft_putchar(n % 10 + '0');
	}
	else if (nb / 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar(nb % 10 + '0');
	}
}
