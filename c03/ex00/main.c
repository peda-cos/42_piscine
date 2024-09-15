#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = "Hello";
	char	*str3 = "HelloWorld";
	char	*str4 = "Hell";
	char	*str5 = "Hella";
	char	*str6 = "helloworld";

	// Teste 1: Strings iguais
	printf("Test 1: %d\n", ft_strcmp(str1, str2));

	// Teste 2: Segunda string é maior
	printf("Test 2: %d\n", ft_strcmp(str1, str3));

	// Teste 3: Primeira string é maior
	printf("Test 3: %d\n", ft_strcmp(str1, str4));

	// Teste 4: Strings diferentes (primeira diferença nos últimos caracteres)
	printf("Test 4: %d\n", ft_strcmp(str1, str5));

	// Teste 5: Diferença entre letras maiúsculas e minúsculas
	printf("Test 5: %d\n", ft_strcmp(str1, str6));

	return (0);
}
