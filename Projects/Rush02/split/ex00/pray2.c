void	pray2(int **sol, int num_left[2], int pos)
{
	int	count;

	count = 0;
	for (size_t i = 0; i < 4; i++)
	{
		if (sol[pos][i] == 0)
		{
			sol[pos][i] = num_left[count];
			count++;
		}
	}
}
