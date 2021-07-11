int	*parse_input(char *input)
{
	int	count;
	int	*arr;
	int	i;

	arr = (int *)malloc(sizeof(int) * 16 + 1);
	count = 0;
	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] != ' ')
		{
			arr[count] = input[i] - 48;
			count++;
		}
		i++;
	}
	return (arr);
}
