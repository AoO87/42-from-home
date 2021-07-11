void	ft_rev_int_tab(int *tab, int size)
{
	int	cntl;
	int	rcntl;
	int	val;

	cntl = 0;
	rcntl = (size - 1);
	while (cntl < rcntl)
	{
		val = tab[cntl];
		tab[cntl] = tab[rcntl];
		tab[rcntl] = val;
		cntl++;
		rcntl--;
	}
}
