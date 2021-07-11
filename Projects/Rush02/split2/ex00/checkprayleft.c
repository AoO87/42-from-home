int	checkprayleft(int **sol, int og, int pos)
{
	int	count;
	int	max;
	int	si;

	max = sol[pos][0];
	count = 1;
	i = 0;
	while (i++ < 4)
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
