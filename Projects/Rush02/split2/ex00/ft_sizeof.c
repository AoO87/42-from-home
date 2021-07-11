int	ft_sizeof(char *input)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] >= 49 && input[i] <= 52)
		{
			count++;
		}
		i += 2;
	}
	return (count);
}
