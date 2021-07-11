int ft_fibonacci(int index)
{
	if (index == 0)
	{
		return (0);
	}
	else if (index < 2)
	{
		return(1);
	}
	else 
	return(ft_fibonacci(index-1) + ft_fibonacci(index -2));
}

#include<stdio.h>

int	main(void)
{
	printf("%i\n", ft_fibonacci(3));
}