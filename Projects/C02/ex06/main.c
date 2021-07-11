#include<stdio.h>

int ft_str_is_printable(char *str);
int	main(void)
{
	char a[] = "\x21";
	char A[] = "ABCDE";
	char n[] = "01234";
	char e[] = "";

	printf("a = %d\n", ft_str_is_printable(a));
	printf("A = %d\n", ft_str_is_printable(A));
	printf("n = %d\n", ft_str_is_printable(n));
	printf("e = %d\n", ft_str_is_printable(e));
}