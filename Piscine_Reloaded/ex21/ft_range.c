#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	i;
	int	*array;

	n = max - min;
	array = (int *) malloc(n * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (i < n)
	{
		array[i] = min + i;
		i++; 
	}
	return (array);
}


int main(void)
{
	int min = 4;
	int max = 10;
	int n = max - min;
	int	*array = ft_range(min, max);
	
	int i = 0;
	while (i < n)
	{
		printf("%i ", array[i]);
		i++;
	}
}