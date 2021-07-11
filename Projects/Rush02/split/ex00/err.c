int	err(int *input)
{
	int	arr[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 4};
	int	wrong = 1;
	for (size_t i = 0; i < 16; i++)
	{
		if (arr[i] != input[i])
		{
			wrong = 0;
		}
	}
	if (wrong)
	{
		ft_error_message();
		return (0);
	}
	return (0);
}
