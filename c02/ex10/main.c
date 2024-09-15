#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest1[20];
	char	dest2[6];
	char	dest3[1];

	// Teste 1: Copiando com tamanho suficiente
	printf("Test 1 - Before: \"%s\"\n", src);
	ft_strlcpy(dest1, src, sizeof(dest1));
	printf("Test 1 - After: \"%s\"\n\n", dest1);

	// Teste 2: Copiando com tamanho limitado
	printf("Test 2 - Before: \"%s\"\n", src);
	ft_strlcpy(dest2, src, sizeof(dest2));
	printf("Test 2 - After: \"%s\"\n\n", dest2);

	// Teste 3: Copiando com tamanho zero
	printf("Test 3 - Before: \"%s\"\n", src);
	ft_strlcpy(dest3, src, sizeof(dest3));
	printf("Test 3 - After: \"%s\"\n\n", dest3);

	return (0);
}
