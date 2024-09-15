#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*test1 = "Hello, World!";
	char	*test2 = "";
	char	*test3 = "42 School";
	char	*test4 = "A longer string to test the ft_strlen function.";

	printf("Test 1: \"%s\" -> Length: %d\n", test1, ft_strlen(test1));
	printf("Test 2: \"%s\" -> Length: %d\n", test2, ft_strlen(test2));
	printf("Test 3: \"%s\" -> Length: %d\n", test3, ft_strlen(test3));
	printf("Test 4: \"%s\" -> Length: %d\n", test4, ft_strlen(test4));
	return (0);
}
