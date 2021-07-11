int ft_sqrt(int nb)
{
	int oddnum;
	int root;

	oddnum = 1;
	root =0;
	while (nb > 0)
	{
		nb -= oddnum;
		oddnum += 2;
		root++;
	}
	if (nb == 0)
	return (root);
	else
	return(0);
}


#include<stdio.h>

int main(void)
{
	printf("%i\n", ft_sqrt());
}