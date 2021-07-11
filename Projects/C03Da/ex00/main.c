#include<stdio.h>
#include<string.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char str1[] = "usduasvd";
	char str2[] = "usda";
	char str3[] = "usduasvdffffff";
	char str4[] = "usduav";

	printf("ft_strcmp(str1, str2): %d\n", ft_strcmp(str1, str2));
	printf("strcmp(str1, str2): %d\n", strcmp(str1, str2));
	printf("\nft_strcmp(str1, str3): %d\n", ft_strcmp(str1, str3));
	printf("strcmp(str1, str3): %d\n", strcmp(str1, str3));
	printf("\nft_strcmp(str1, str4): %d\n", ft_strcmp(str1, str4));
	printf("strcmp(str1, str4): %d\n", strcmp(str1, str4));
}