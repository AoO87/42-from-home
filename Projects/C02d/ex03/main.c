#include<stdio.h>

int ft_str_is_numeric(char *str);
int	main(void)
{
	char a[] = "abc#1de";
	char A[] = "ABCDE";
	char n[] = "01234";
	char e[] = "";

	printf("a = %d\n", ft_str_is_numeric(a));
	printf("A = %d\n", ft_str_is_numeric(A));
	printf("n = %d\n", ft_str_is_numeric(n));
	printf("e = %d\n", ft_str_is_numeric(e));
}