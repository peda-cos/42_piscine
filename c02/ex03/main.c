#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*test1 = "1234567890";
	char	*test2 = "123a567890";
	char	*test3 = "";
	char	*test4 = "0000";
	char	*test5 = "42School123";

	printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_numeric(test1));
	printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_numeric(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_numeric(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_numeric(test4));
	printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_numeric(test5));

	return (0);
}
