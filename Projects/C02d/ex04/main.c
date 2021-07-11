#include<stdio.h>

int ft_str_is_lowercase(char *str);
int	main(void)
{
	char a[] = "abc#$de";
	char A[] = "ABCDE";
	char n[] = "01234";
	char e[] = "";

	printf("a = %d\n", ft_str_is_lowercase(a));
	printf("A = %d\n", ft_str_is_lowercase(A));
	printf("n = %d\n", ft_str_is_lowercase(n));
	printf("e = %d\n", ft_str_is_lowercase(e));
}