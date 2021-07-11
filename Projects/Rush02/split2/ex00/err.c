int	err(int *input)
{
	int	arr[16];
	int	wrong;
	int	i;

	arr[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 4};
	wrong = 1;
	i = -1;
	while (i++ < 16)
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
