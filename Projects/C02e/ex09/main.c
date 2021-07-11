#include<stdio.h>

char *ft_strcapitalize(char *str);
int	main(void)
{
	char a[] = "salut, coMMEnt tu vas ? 42mots quaRante-deux; cinquante+et+un";
	
	printf("a = %s\n", ft_strcapitalize(a));	
}