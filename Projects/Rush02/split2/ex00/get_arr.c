int	*get_arr(int *input, int count)
{
	int	i;
	int	*arr;

	*arr = (int *)malloc (sizeof(int) * 4 + 1);
	i = 0;
	while (i < 4)
	{
		arr[i] = input[i + count];
		i++;
	}
	return (arr);
}
