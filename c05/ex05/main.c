#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	// Teste 1: Raiz quadrada de 4 (sqrt(4) = 2)
	printf("Test 1: %d\n", ft_sqrt(4));

	// Teste 2: Raiz quadrada de 0 (sqrt(0) = 0)
	printf("Test 2: %d\n", ft_sqrt(0));

	// Teste 3: Raiz quadrada de 16 (sqrt(16) = 4)
	printf("Test 3: %d\n", ft_sqrt(16));

	// Teste 4: Raiz quadrada de 2147395600 (sqrt(2147395600) = 46340)
	printf("Test 4: %d\n", ft_sqrt(2147395600));

	// Teste 5: Número que não tem raiz quadrada exata
	printf("Test 5: %d\n", ft_sqrt(10));

	// Teste 6: Número negativo
	printf("Test 6: %d\n", ft_sqrt(-25));

	return (0);
}
