#include<stdio.h>
#include<string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char str1[] = "usduasvd";
	char str2[] = "usda";
	char str3[] = "usduasvdffffff";
	char str4[] = "";

	printf("ft_strcmp(str1, str2): %d\n", ft_strncmp(str1, str2, 20));
	printf("strcmp(str1, str2): %d\n", strncmp(str1, str2, 20));
	printf("\nft_strcmp(str1, str3): %d\n", ft_strncmp(str1, str3, 20));
	printf("strcmp(str1, str3): %d\n", strncmp(str1, str3, 20));
	printf("\nft_strcmp(str1, str4): %d\n", ft_strncmp(str1, str4, 20));
	printf("strcmp(str1, str4): %d\n", strncmp(str1, str4, 20));
}