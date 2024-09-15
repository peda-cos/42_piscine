#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "";
	char	str3[] = "42 is amazing.";
	char	str4[] = "C programming";

	// Teste 1: Contar caracteres de "Hello, World!"
	printf("Test 1: %d\n", ft_strlen(str1));

	// Teste 2: Contar caracteres de uma string vazia
	printf("Test 2: %d\n", ft_strlen(str2));

	// Teste 3: Contar caracteres de "42 is amazing."
	printf("Test 3: %d\n", ft_strlen(str3));

	// Teste 4: Contar caracteres de "C programming"
	printf("Test 4: %d\n", ft_strlen(str4));

	return (0);
}
