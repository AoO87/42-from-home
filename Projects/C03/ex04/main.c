#include<stdio.h>
#include<string.h>

char *ft_strstr(char *str, char *to_find);
int main(void)
{
    char str[] = "The quick brown fox jumps over ";
    char srch[] = "";

    printf("%s\n", ft_strstr(str, srch));
    printf("%s\n", strstr(str, srch));
}