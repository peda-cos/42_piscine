#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*arr;
	int	i;
	int	min;
	int	max;

	min = 5;
	max = 10;
	arr = ft_range(min, max);
	if (arr)
	{
		i = 0;
		while (i < (max - min))
		{
			printf("%d ", arr[i]);
			i++;
		}
		printf("\n");
	}
	else
	{
		printf("Memory allocation failed or invalid range.\n");
	}

	return (0);
}
