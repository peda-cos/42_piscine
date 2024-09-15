#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab1[] = {1, 2, 3, 4, 5};
	int	size1 = 5;
	int	i;

	printf("Antes da função:\n");
	i = 0;
	while (i < size1)
	{
		printf("%d ", tab1[i]);
		i++;
	}
	printf("\n");

	ft_rev_int_tab(tab1, size1);

	printf("Após a função:\n");
	i = 0;
	while (i < size1)
	{
		printf("%d ", tab1[i]);
		i++;
	}
	printf("\n");

	// Teste com tamanho par
	int	tab2[] = {10, 20, 30, 40};
	int	size2 = 4;

	printf("Antes da função (Tab2):\n");
	i = 0;
	while (i < size2)
	{
		printf("%d ", tab2[i]);
		i++;
	}
	printf("\n");

	ft_rev_int_tab(tab2, size2);

	printf("Após a função (Tab2):\n");
	i = 0;
	while (i < size2)
	{
		printf("%d ", tab2[i]);
		i++;
	}
	printf("\n");

	// Teste com tamanho 1
	int	tab3[] = {100};
	int	size3 = 1;

	printf("Antes da função (Tab3):\n");
	i = 0;
	while (i < size3)
	{
		printf("%d ", tab3[i]);
		i++;
	}
	printf("\n");

	ft_rev_int_tab(tab3, size3);

	printf("Após a função (Tab3):\n");
	i = 0;
	while (i < size3)
	{
		printf("%d ", tab3[i]);
		i++;
	}
	printf("\n");

	return (0);
}
