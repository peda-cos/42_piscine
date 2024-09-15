#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	// Teste 1: Verificar se 2 é primo
	printf("Test 1: %d\n", ft_is_prime(2));

	// Teste 2: Verificar se 15 é primo
	printf("Test 2: %d\n", ft_is_prime(15));

	// Teste 3: Verificar se 17 é primo
	printf("Test 3: %d\n", ft_is_prime(17));

	// Teste 4: Verificar se 1 é primo
	printf("Test 4: %d\n", ft_is_prime(1));

	// Teste 5: Verificar se 0 é primo
	printf("Test 5: %d\n", ft_is_prime(0));

	// Teste 6: Verificar se -7 é primo
	printf("Test 6: %d\n", ft_is_prime(-7));

	// Teste 7: Verificar se 2147483647 (maior int) é primo
	printf("Test 7: %d\n", ft_is_prime(2147483647));

	return (0);
}
