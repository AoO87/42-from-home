void	pray (int start, int end, int dir, int **sol, int pos)
{
	int	count;
	int	num_left[2];
	int	num[4];
	int	count2;
	int	i;
	int	j;
	int	x;
	int	y;

	if (dir == 1)
	{
		i = -1;
		while (i++ < 4)
		{
			count = 0;
			j = -1;
			while (j++ < 4)
			{
				if (sol[i][j] == 0)
					count++;
			}
			if (count == 2)
			{
				x = -1;
				while (x++ < 4)
				{
					if (num[sol[i][x]] != 0)
					{
						num[sol[i][x]] = 1;
					}
				}
				count2 = 0;
				y = -1;
				while (y++ < 4)
				{
					if (num[x] != 1)
					{
						num_left[count2] = x + 1;
						count2++;
					}
				}
			}
			printf ("%d\n", num_left[0]);
			printf ("%d\n", num_left[1]);
			pray2 (sol, num_left, pos);
		}
	}
}
