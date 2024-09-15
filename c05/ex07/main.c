#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	// Teste 1: Próximo primo após 10 (próximo é 11)
	printf("Test 1: %d\n", ft_find_next_prime(10));

	// Teste 2: Próximo primo após 29 (é o próprio 29)
	printf("Test 2: %d\n", ft_find_next_prime(29));

	// Teste 3: Próximo primo após 0 (é 2)
	printf("Test 3: %d\n", ft_find_next_prime(0));

	// Teste 4: Próximo primo após -10 (é 2)
	printf("Test 4: %d\n", ft_find_next_prime(-10));

	// Teste 5: Próximo primo após 2147483620
	printf("Test 5: %d\n", ft_find_next_prime(2147483620));

	return (0);
}
