#include <stdio.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	i = min;
	while(i < max)
	{
	    size = i++;
	}
	if(min >= max) //if min >= max program return a NULL
	{
		return (NULL);
	}
	else if(!(tab = (int*)malloc((size+1) * sizeof(int)))) //if malloc can't allocate memory for array tab return a NULL
	{
		return (NULL);
	}
	i = min;
	while(i <= size)
	{
		tab[i] = i;//store all values between min and max to array tab.
		i++;
	}
	return(tab);
}

int main()
{
	int min = 0;
	int max = 10;
	int *len;
	int	i;

	len = ft_range(min, max);// pointer to integer
	if(len != NULL)
	{ 
		i = min;
		while(i < max)
		{
			printf("%d ", len[i]);
			i++;
		}
	}
	return (0);
}
