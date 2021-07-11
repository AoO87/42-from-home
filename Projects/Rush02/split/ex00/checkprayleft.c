int	checkprayleft(int **sol, int og, int pos)
{
	int	count;
	int	max;

	max = sol[pos][0];
	count = 1;
	for (size_t i = 1; i < 4; i++)
	{
		if (sol[pos][i] > max)
		{
			count++;
			max = sol[pos][i];
		}
	}
	if (count == og)
		return (1);
	return (0);
}
