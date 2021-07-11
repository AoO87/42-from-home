int ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0) 
	{
		return (1);
	}
	else
	return (nb * ft_recursive_power(nb, power-1));
}

#include<stdio.h>

int main (void)
{
	printf("%i\n", ft_recursive_power(5, 3));
	printf("%i\n", ft_recursive_power(0, 0));
	printf("%i\n", ft_recursive_power(-5, 3));
	printf("%i\n", ft_recursive_power(0, 1));
}