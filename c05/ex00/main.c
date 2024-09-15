#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	// Teste 1: Fatorial de 5 (5!)
	printf("Test 1: %d\n", ft_iterative_factorial(5));

	// Teste 2: Fatorial de 0 (0!)
	printf("Test 2: %d\n", ft_iterative_factorial(0));

	// Teste 3: Fatorial de número negativo (-5)
	printf("Test 3: %d\n", ft_iterative_factorial(-5));

	// Teste 4: Fatorial de 10 (10!)
	printf("Test 4: %d\n", ft_iterative_factorial(10));

	// Teste 5: Fatorial de 1 (1!)
	printf("Test 5: %d\n", ft_iterative_factorial(1));

	return (0);
}
