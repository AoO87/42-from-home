void	fill(int **sol, int dir, int pos, int pos1,
int pos2, int pos3, int pos4)
{
	if (dir == 1)
	{
		if (!sol[0][pos])
			sol[0][pos] = pos1;
		if (!sol[1][pos])
			sol[1][pos] = pos2;
		if (!sol[2][pos])
			sol[2][pos] = pos3;
		if (!sol[3][pos])
			sol[3][pos] = pos4;
	}
	else if (dir == 3)
	{
		if (!sol[pos][0])
			sol[pos][0] = pos1;
		if (!sol[pos][1])
			sol[pos][1] = pos2;
		if (!sol[pos][2])
			sol[pos][2] = pos3;
		if (!sol[pos][3])
			sol[pos][3] = pos4;
	}
	else if (dir == 2)
	{
		if (!sol[0][pos])
			sol[0][pos] = pos4;
		if (!sol[1][pos])
			sol[1][pos] = pos3;
		if (!sol[2][pos])
			sol[2][pos] = pos2;
		if (!sol[3][pos])
			sol[3][pos] = pos1;
	}
	else if (dir == 4)
	{
		if (!sol[pos][0])
			sol[pos][0] = pos4;
		if (!sol[pos][1])
			sol[pos][1] = pos3;
		if (!sol[pos][2])
			sol[pos][2] = pos2;
		if (!sol[pos][3])
			sol[pos][3] = pos1;
	}
}
