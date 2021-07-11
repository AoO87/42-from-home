int ft_iterative_factorial(int nb)
{
	int n;

	n = nb;
	if (nb == 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	while (n > 1)
	{
		nb = nb * (n -1);
		n--;
	}
	return (nb);
}

// #include<stdio.h>

// int main (void)
// {
// 	printf("%i\n", ft_iterative_factorial(-4));
// }