void	hardcheck(int start, int end, int dir, int pos, int **sol)
{
	if (start == 1)
	{
		fill (sol, dir, pos, 4, 0, 0, 0);
	}
	else if (start == 2 && end == 3)
	{
		fill (sol, dir, pos, 0, 4, 0, 0);
	}
	else if (start == 4)
	{
		fill (sol, dir, pos, 1, 2, 3, 4);
	}
}
