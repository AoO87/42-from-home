#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_error_message(void)
{
	write(1, "Error\n", 6);
}

int ft_sizeof(char * input)
{
	int count = 0;
	int i = 0;
	while(input[i] != '\0')
	{
		if(input[i] >= 49 && input[i] <= 52)
		{
 			count++;
		}
		i+=2;
	}
	
	return count;
}

int * parse_input(char * input)
{
	int count = 0;
	int *arr = (int *)malloc(sizeof(int)*16+1);
	int i = 0;
	while(input[i] != '\0')
	{
		if(input[i] != ' ')
		{
			arr[count] = input[i]-48;
			count++;
		}
		i++;
	}
	return arr;
}

int * get_arr(int *input,int count)
{
	int i = 0;
	int * arr = (int*)malloc(sizeof(int)*4+1);
	
	while(i < 4)
	{
		arr[i] = input[i+count];
		i++; 	
	}
	return arr;
}

void fill(int **sol, int dir, int pos, int pos1,int pos2,int pos3,int pos4)
{
	if(dir == 1)
	{
		if(!sol[0][pos]) sol[0][pos] = pos1;
		if(!sol[1][pos]) sol[1][pos] = pos2;
		if(!sol[2][pos]) sol[2][pos] = pos3;
		if(!sol[3][pos]) sol[3][pos] = pos4;
	} else if(dir == 3)
	{
		if(!sol[pos][0]) sol[pos][0] = pos1;
		if(!sol[pos][1]) sol[pos][1] = pos2;
		if(!sol[pos][2]) sol[pos][2] = pos3;
		if(!sol[pos][3]) sol[pos][3] = pos4;
	} else if(dir == 2)
	{
		if(!sol[0][pos]) sol[0][pos] = pos4;
		if(!sol[1][pos]) sol[1][pos] = pos3;
		if(!sol[2][pos]) sol[2][pos] = pos2;
		if(!sol[3][pos]) sol[3][pos] = pos1;
	} else if(dir ==4){
		if(!sol[pos][0]) sol[pos][0] = pos4;
		if(!sol[pos][1]) sol[pos][1] = pos3;
		if(!sol[pos][2]) sol[pos][2] = pos2;
		if(!sol[pos][3]) sol[pos][3] = pos1;
	}
}

void	hardcheck(int start, int end, int dir, int pos, int **sol)
{
	if(start == 1)
	{
		fill(sol,dir,pos,4,0,0,0);
	} else if(start == 2 && end == 3)
	{
		fill(sol,dir,pos,0,4,0,0);
	} else if(start == 4) {
		fill(sol,dir,pos,1,2,3,4);
	}

}

int	checkprayleft(int **sol,int og,int pos)
{
	int count = 1;
	int max = sol[pos][0];
	for(size_t i = 1; i < 4; i++)
	{
		if(sol[pos][i] > max)
		{
			count++;
			max = sol[pos][i];
		}
	}
	if(count == og) return 1;
	return 0;
}

void	pray2(int **sol,int num_left[2],int pos)
{
	int count = 0;
	for(size_t i = 0; i < 4; i++)
	{
		if(sol[pos][i] == 0) 
		{
			sol[pos][i] = num_left[count];
			count++;
		}
	}
}

void	pray(int start, int end, int dir,int **sol, int pos)
{
	// left right
	if(dir == 1)
	{
		for(int i = 0; i < 4; i++)
		{
			int count = 0;
			for(int j = 0; j < 4; j++)
			{
				if(sol[i][j] == 0) count++;
			}
			int num_left[2];

			// two empty
			if(count == 2)
			{
				int num[4];
				for(int x = 0; x <4; x++)
				{
					if(num[sol[i][x]] != 0)
					{
						num[sol[i][x]] = 1; 
					}
				}
				int count2 = 0;
				for(int x = 0; x < 4; x++)
				{
					if(num[x] != 1)
					{
						num_left[count2] = x+1;
						count2++;
					}
				}
			}
			printf("%d\n",num_left[0]);
			printf("%d\n",num_left[1]);

			// fill sol with 1 of the 2 numbers and check if it works in both directions
			pray2(sol,num_left,pos);
		}

	}
}

void	get_solution(int *top_arr, int* bottom_arr, int *right_arr, int *left_arr, int **sol)
{
	int	i;
	int	notfilled;
	int	counter;
	int	j;

	i = 0;
	notfilled = 1;
	counter = 0;
	while (counter < 5)
	{
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (counter == 0)
				{
					hardcheck(top_arr[j], bottom_arr[j], 1, j, sol);
					hardcheck(bottom_arr[j], top_arr[j], 2, j, sol);
					hardcheck(left_arr[i], right_arr[i], 3, i, sol);
					hardcheck(right_arr[i], left_arr[i], 4, i, sol);
				}
				if (counter == 1)
				{
					pray(left_arr[i], right_arr[i], 3, sol, i);
				}
				j++;
			}
			i++;
		}
		counter++;
	}
}

int	err(int *input)
{
	int	arr[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 4};
	int	wrong = 1;
	for (size_t i = 0; i < 16; i++)
	{
		if (arr[i] != input[i])
		{
			wrong = 0;
		}
	}
	if (wrong)
	{
		ft_error_message();
		return (0);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	**table;
	int		size;
	char	*input;
	int		**sol = (int **)malloc(4 * sizeof(int *));

	*input = argv[1];
	size = 16;
	for (int r = 0; r < 4; r++)
	{
		sol[r] = (int *)malloc(4 * sizeof(int));
	}
	if (argc != 2 || size != ft_sizeof(input))
	{
		ft_error_message();
	}
	else
	{
		int	*arr = parse_input(input);
		if (!err(arr))
		{
			int	*top_arr = get_arr(arr, 0);
			int	*bottom_arr = get_arr(arr, 4);
			int	*left_arr = get_arr(arr, 8);
			int	*right_arr = get_arr(arr, 12);
			get_solution(top_arr, bottom_arr, right_arr, left_arr, sol);
			for (int x = 0; x < 4; x++)
			{
				for (size_t y = 0; y < 4; y++)
				{
					printf("%d", sol[x][y]);
				}
				printf("\n");
			}
		}
	}
	return (0);
}
