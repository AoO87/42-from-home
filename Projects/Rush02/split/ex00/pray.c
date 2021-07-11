void	pray (int start, int end, int dir, int **sol, int pos)
{
	int	count;
	int	num_left[2];

	if (dir == 1)
	{
		for (int i = 0; i < 4; i++)
		{
			count = 0;
			for (int j = 0; j < 4; j++)
			{
				if (sol[i][j] == 0) count++;
			}
			
			if (count == 2)
			{
				int num[4];
				for (int x = 0; x <4; x++)
				{
					if (num[sol[i][x]] != 0)
					{
						num[sol[i][x]] = 1; 
					}
				}
				int count2 = 0;
				for (int x = 0; x < 4; x++)
				{
					if (num[x] != 1)
					{
						num_left[count2] = x+1;
						count2++;
					}
				}
			}
			printf("%d\n",num_left[0]);
			printf("%d\n",num_left[1]);
			pray2(sol,num_left,pos);
		}

	}
}
