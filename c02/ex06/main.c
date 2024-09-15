#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*test1 = "Hello, World!";
	char	*test2 = "Hello\tWorld!";
	char	*test3 = "";
	char	*test4 = "Printable ASCII: ~`!@#$%^&*()-_=+[]{}|;:',.<>/?";
	char	*test5 = "Non-printable:\n\r\t";

	printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_printable(test1));
	printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_printable(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_printable(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_printable(test4));
	printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_printable(test5));

	return (0);
}
