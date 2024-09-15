#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	// Teste 1: Fibonacci de 0
	printf("Test 1: %d\n", ft_fibonacci(0));

	// Teste 2: Fibonacci de 1
	printf("Test 2: %d\n", ft_fibonacci(1));

	// Teste 3: Fibonacci de 5
	printf("Test 3: %d\n", ft_fibonacci(5));

	// Teste 4: Fibonacci de 10
	printf("Test 4: %d\n", ft_fibonacci(10));

	// Teste 5: Índice negativo (-5)
	printf("Test 5: %d\n", ft_fibonacci(-5));

	return (0);
}
