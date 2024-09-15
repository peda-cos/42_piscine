#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	// Teste 1: Exibir número positivo
	printf("Test 1: ");
	fflush(stdout);	// Forçar exibição
	ft_putnbr(12345);
	printf("\n");

	// Teste 2: Exibir número negativo
	printf("Test 2: ");
	fflush(stdout);	// Forçar exibição
	ft_putnbr(-12345);
	printf("\n");

	// Teste 3: Exibir número zero
	printf("Test 3: ");
	fflush(stdout);	// Forçar exibição
	ft_putnbr(0);
	printf("\n");

	// Teste 4: Exibir o menor número inteiro (-2147483648)
	printf("Test 4: ");
	fflush(stdout);	// Forçar exibição
	ft_putnbr(-2147483648);
	printf("\n");

	// Teste 5: Exibir o maior número inteiro (2147483647)
	printf("Test 5: ");
	fflush(stdout);	// Forçar exibição
	ft_putnbr(2147483647);
	printf("\n");

	return (0);
}
