void	ft_ultimate_div_mod(int *a, int *b)
{
	int	val1;
	int	val2;

	val1 = *a;
	val2 = *b;
	*a = val1 / val2;
	*b = val1 % val2;
}
