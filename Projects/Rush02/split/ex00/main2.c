int	main(int argc, char **argv)
{
	char	**table;
	int		size;
	char	*input;
	int		**sol = (int **)malloc(4 * sizeof(int *));

	*input = argv[1];
	size = 16;
	for (int r = 0; r < 4; r++)
	{
		sol[r] = (int *)malloc(4 * sizeof(int));
	}
	if (argc != 2 || size != ft_sizeof(input))
	{
		ft_error_message();
	}
	else
	{
		int	*arr = parse_input(input);
		if (!err(arr))
		{
			int	*top_arr = get_arr(arr, 0);
			int	*bottom_arr = get_arr(arr, 4);
			int	*left_arr = get_arr(arr, 8);
			int	*right_arr = get_arr(arr, 12);
			get_solution(top_arr, bottom_arr, right_arr, left_arr, sol);
			for (int x = 0; x < 4; x++)
			{
				for (size_t y = 0; y < 4; y++)
				{
					printf("%d", sol[x][y]);
				}
				printf("\n");
			}
		}
	}
	return (0);
}
