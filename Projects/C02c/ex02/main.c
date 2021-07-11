#include<stdio.h>

int ft_str_is_alpha(char *str);
int	main(void)
{
	char a[] = "abcde";
	char A[] = "ABCDE";
	char n[] = "01234";
	char e[] = "";

	printf("a = %d\n", ft_str_is_alpha(a));
	printf("A = %d\n", ft_str_is_alpha(A));
	printf("n = %d\n", ft_str_is_alpha(n));
	printf("e = %d\n", ft_str_is_alpha(e));
}