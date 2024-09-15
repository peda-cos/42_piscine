#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*arr;
	int	size;
	int	i;

	size = ft_ultimate_range(&arr, 5, 10);
	if (size == -1)
	{
		printf("Memory allocation failed.\n");
	}
	else if (size == 0)
	{
		printf("Invalid range.\n");
	}
	else
	{
		printf("Range size: %d\n", size);
		i = 0;
		while (i < size)
		{
			printf("%d ", arr[i]);
			i++;
		}
		printf("\n");
	}
	free(arr);
	return (0);
}
