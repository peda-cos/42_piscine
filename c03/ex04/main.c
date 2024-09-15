#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "Find this substring.";
	char	str3[] = "No match here.";
	char	str4[] = "";
	char	to_find1[] = "World";
	char	to_find2[] = "this";
	char	to_find3[] = "match";
	char	to_find4[] = "";

	// Teste 1: Procurar "World" em "Hello, World!"
	printf("Test 1: %s\n", ft_strstr(str1, to_find1));

	// Teste 2: Procurar "this" em "Find this substring."
	printf("Test 2: %s\n", ft_strstr(str2, to_find2));

	// Teste 3: Procurar "match" em "No match here."
	printf("Test 3: %s\n", ft_strstr(str3, to_find3));

	// Teste 4: Procurar string vazia em "Hello, World!"
	printf("Test 4: %s\n", ft_strstr(str1, to_find4));

	// Teste 5: Procurar "this" em uma string vazia
	printf("Test 5: %s\n", ft_strstr(str4, to_find2));

	return (0);
}
