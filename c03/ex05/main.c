#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest1[20] = "Hello";
	char	dest2[20] = "World";
	char	dest3[10] = "42";
	char	src1[] = " Everyone";
	char	src2[] = "!!";
	char	src3[] = " School";

	// Teste 1: Concatenar src1 em dest1 com espaço suficiente
	printf("Test 1: %u | %s\n", ft_strlcat(dest1, src1, sizeof(dest1)), dest1);

	// Teste 2: Concatenar src2 em dest2 com espaço limitado
	printf("Test 2: %u | %s\n", ft_strlcat(dest2, src2, sizeof(dest2)), dest2);

	// Teste 3: Concatenar src3 em dest3 com espaço insuficiente
	printf("Test 3: %u | %s\n", ft_strlcat(dest3, src3, sizeof(dest3)), dest3);

	return (0);
}
