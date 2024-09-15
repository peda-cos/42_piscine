#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	// Teste 1: 2^3 (2 elevado à potência de 3)
	printf("Test 1: %d\n", ft_recursive_power(2, 3));

	// Teste 2: 5^0 (Qualquer número elevado a 0 é 1)
	printf("Test 2: %d\n", ft_recursive_power(5, 0));

	// Teste 3: 10^-2 (Expoente negativo deve retornar 0)
	printf("Test 3: %d\n", ft_recursive_power(10, -2));

	// Teste 4: 3^4 (3 elevado à potência de 4)
	printf("Test 4: %d\n", ft_recursive_power(3, 4));

	// Teste 5: 7^1 (Qualquer número elevado a 1 é o próprio número)
	printf("Test 5: %d\n", ft_recursive_power(7, 1));

	return (0);
}
