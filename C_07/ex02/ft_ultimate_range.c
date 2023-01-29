#include <stdio.h>
#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	size = max - min;//for min included - max excluded.
	if(min >= max) //if min >= max program return a NULL
	{	
		*range = NULL; 
		return (0);
	}
	else if(!(tab = (int*)malloc((size+1) * sizeof(int)))) //if malloc can't allocate memory for array tab return a NULL
	{	
		return (-1);
	}
	range = &tab; //pointer range to pointed array "tab".
	i = min;
	while(i < max)
	{
		(*range)[i] = i;//store all values between min and max to array tab.
		i++;
	}
	return(i);
}

int main()
{
	int	min = 0;
	int	max = 100;
	int	*len;

	printf("size of range is %d ", ft_ultimate_range(&len, min, max));// pointer to integer
	return (0);
}
