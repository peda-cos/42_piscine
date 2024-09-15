#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = "Hello";
	char	*str3 = "HelloWorld";
	char	*str4 = "Hell";
	char	*str5 = "Hella";
	char	*str6 = "helloworld";

	// Teste 1: Comparar até 5 caracteres (strings iguais)
	printf("Test 1: %d\n", ft_strncmp(str1, str2, 5));

	// Teste 2: Comparar até 5 caracteres (segunda string maior)
	printf("Test 2: %d\n", ft_strncmp(str1, str3, 5));

	// Teste 3: Comparar até 6 caracteres (segunda string maior)
	printf("Test 3: %d\n", ft_strncmp(str1, str3, 6));

	// Teste 4: Comparar até 4 caracteres (strings iguais)
	printf("Test 4: %d\n", ft_strncmp(str1, str4, 4));

	// Teste 5: Comparar até 5 caracteres (strings diferentes no último caractere)
	printf("Test 5: %d\n", ft_strncmp(str1, str5, 5));

	// Teste 6: Comparar até 5 caracteres (diferença entre maiúsculas e minúsculas)
	printf("Test 6: %d\n", ft_strncmp(str1, str6, 5));

	return (0);
}
