#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char source[] = "Sucks";
	char destin[] = "Alex ";


	
	printf("%s\n", ft_strncat(destin, source, 8));
}