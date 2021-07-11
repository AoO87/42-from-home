#include<stdio.h>

int ft_str_is_uppercase(char *str);
int	main(void)
{
	char a[] = "abc#$de";
	char A[] = "ABCDE";
	char n[] = "01234";
	char e[] = "";

	printf("a = %d\n", ft_str_is_uppercase(a));
	printf("A = %d\n", ft_str_is_uppercase(A));
	printf("n = %d\n", ft_str_is_uppercase(n));
	printf("e = %d\n", ft_str_is_uppercase(e));
}