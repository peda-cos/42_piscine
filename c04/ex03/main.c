#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	str1[] = "   -12345";
	char	str2[] = "42";
	char	str3[] = "   +987";
	char	str4[] = "   -42abc";
	char	str5[] = "  +0";
	char	str6[] = "   --123";

	// Teste 1: String com espaços e número negativo
	printf("Test 1: %d\n", ft_atoi(str1));

	// Teste 2: String com número positivo
	printf("Test 2: %d\n", ft_atoi(str2));

	// Teste 3: String com sinal de "+"
	printf("Test 3: %d\n", ft_atoi(str3));

	// Teste 4: String com número seguido de letras
	printf("Test 4: %d\n", ft_atoi(str4));

	// Teste 5: String com zero
	printf("Test 5: %d\n", ft_atoi(str5));

	// Teste 6: String com múltiplos sinais (inválido)
	printf("Test 6: %d\n", ft_atoi(str6));

	return (0);
}
