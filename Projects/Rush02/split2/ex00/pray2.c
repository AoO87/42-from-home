void	pray2(int **sol, int num_left[2], int pos)
{
	int	count;
	int	i;

	count = 0;
	i = -1;
	while (i++ < 4)
	{
		if (sol[pos][i] == 0)
		{
			sol[pos][i] = num_left[count];
			count++;
		}
	}
}
