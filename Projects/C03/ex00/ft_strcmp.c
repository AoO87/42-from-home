int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	if (s2[i])
	{
		return (-1);
	}
	return (0);
}
