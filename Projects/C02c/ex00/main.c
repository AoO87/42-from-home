#include<stdio.h>
char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[] = "012454545";
	char dest[20];

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return(0);
}