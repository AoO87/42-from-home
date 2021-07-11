#include<stdio.h>

char *ft_strcapitalize(char *str);
int	main(void)
{
	char a[] = "SALUT, coMMEnt tu vas ? 42Mots quaRante-deux; cinquante+et+un";
	
	printf("a = %s\n", ft_strcapitalize(a));	
}