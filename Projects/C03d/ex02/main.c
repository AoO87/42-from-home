#include<stdio.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char source[] = "Sucks";
	char destin[] = "Alex ";

	
	printf("%s\n", ft_strcat(destin, source));
}