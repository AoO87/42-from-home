#include<stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src[] = "210054545";
	char dest[] = "443525656456";

	ft_strncpy(dest, src, 12);
	printf("%s\n", dest);
	return(0);
}