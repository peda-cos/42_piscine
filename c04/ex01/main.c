#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "";
	char	str3[] = "42 is amazing.";
	char	str4[] = "C programming";

	// Teste 1: Exibir "Hello, World!"
	printf("Test 1: ");
	fflush(stdout);	// Forçar exibição
	ft_putstr(str1);
	printf("\n");

	// Teste 2: Exibir uma string vazia
	printf("Test 2: ");
	fflush(stdout);
	ft_putstr(str2);
	printf("\n");

	// Teste 3: Exibir "42 is amazing."
	printf("Test 3: ");
	fflush(stdout);
	ft_putstr(str3);
	printf("\n");

	// Teste 4: Exibir "C programming"
	printf("Test 4: ");
	fflush(stdout);
	ft_putstr(str4);
	printf("\n");

	return (0);
}
