#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest1[50] = "Hello, ";
	char	dest2[50] = "42 ";
	char	dest3[50] = "";
	char	src1[] = "World!";
	char	src2[] = "School!";
	char	src3[] = "Let's code!";

	// Teste 1: Concatenar 3 caracteres de "World!" em "Hello, "
	printf("Test 1 Before: \"%s\"\n", dest1);
	ft_strncat(dest1, src1, 3);
	printf("Test 1 After : \"%s\"\n\n", dest1);

	// Teste 2: Concatenar 6 caracteres de "School!" em "42 "
	printf("Test 2 Before: \"%s\"\n", dest2);
	ft_strncat(dest2, src2, 6);
	printf("Test 2 After : \"%s\"\n\n", dest2);

	// Teste 3: Concatenar 5 caracteres de "Let's code!" em ""
	printf("Test 3 Before: \"%s\"\n", dest3);
	ft_strncat(dest3, src3, 5);
	printf("Test 3 After : \"%s\"\n\n", dest3);

	return (0);
}
