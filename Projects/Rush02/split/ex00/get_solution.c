void	get_solution(int *top_arr, int* bottom_arr, int *right_arr, int *left_arr, int **sol)
{
	int	i;
	int	notfilled;
	int	counter;
	int	j;

	i = 0;
	notfilled = 1;
	counter = 0;
	while (counter < 5)
	{
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (counter == 0)
				{
					hardcheck(top_arr[j], bottom_arr[j], 1, j, sol);
					hardcheck(bottom_arr[j], top_arr[j], 2, j, sol);
					hardcheck(left_arr[i], right_arr[i], 3, i, sol);
					hardcheck(right_arr[i], left_arr[i], 4, i, sol);
				}
				if (counter == 1)
				{
					pray(left_arr[i], right_arr[i], 3, sol, i);
				}
				j++;
			}
			i++;
		}
		counter++;
	}
}
