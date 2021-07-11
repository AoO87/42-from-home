void	pray2(int **sol, int num_left[2], int pos);
void	pray (int start, int end, int dir, int **sol,
int pos);
int		*parse_input(char *input);
void	hardcheck(int start, int end, int dir, int pos, int **sol);
void	get_solution(int *top_arr, int *bottom_arr,
		int *right_arr, int *left_arr, int **sol);
int		*get_arr(int *input, int count);
int		ft_sizeof(char *input);
void	ft_error_message(void);
void	fill(int **sol, int dir, int pos, int pos1,
		int pos2, int pos3, int pos4);
int		err(int *input);
int		checkprayleft(int **sol, int og, int pos);

int	main(int argc, char **argv)
{
	char	**table;
	int		size;
	char	*input;
	int		**sol;
	int		*arr;
	int		r;
	int		x;
	int		y;

	**sol = (int **)malloc(4 * sizeof(int *));
	*input = argv[1];
	size = 16;
	r = -1;
	while (r++ < 4)
	{
		sol[r] = (int *)malloc(4 * sizeof(int));
	}
	if (argc != 2 || size != ft_sizeof(input))
	{
		ft_error_message();
	}
	else
	{
		*arr = parse_input(input);
		if (!err(arr))
		{
			int	*top_arr = get_arr(arr, 0);
			int	*bottom_arr = get_arr(arr, 4);
			int	*left_arr = get_arr(arr, 8);
			int	*right_arr = get_arr(arr, 12);
			get_solution(top_arr, bottom_arr, right_arr, left_arr, sol);
			x = -1;
			while (x++ < 4)
			{
				y = -1;
				while (y++ < 4)
				{
					printf("%d", sol[x][y]);
				}
				printf("\n");
			}
		}
	}
	return (0);
}
