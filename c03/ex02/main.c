#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest1[50] = "Hello, ";
	char	dest2[50] = "42 ";
	char	src1[] = "World!";
	char	src2[] = "School!";
	char	src3[] = "Let's code!";
	
	// Teste 1: Concatenar "World!" em "Hello, "
	printf("Test 1 Before: \"%s\"\n", dest1);
	ft_strcat(dest1, src1);
	printf("Test 1 After : \"%s\"\n\n", dest1);

	// Teste 2: Concatenar "School!" em "42 "
	printf("Test 2 Before: \"%s\"\n", dest2);
	ft_strcat(dest2, src2);
	printf("Test 2 After : \"%s\"\n\n", dest2);

	// Teste 3: Concatenar "Let's code!" em ""
	char dest3[50] = "";
	printf("Test 3 Before: \"%s\"\n", dest3);
	ft_strcat(dest3, src3);
	printf("Test 3 After : \"%s\"\n\n", dest3);

	return (0);
}
