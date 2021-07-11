void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	val;

	a = 0;
	b = a + 1;
	while (a < size)
	{		
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				val = tab[a];
				tab[a] = tab[b];
				tab[b] = val;
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
