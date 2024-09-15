#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*test1 = "HELLOWORLD";
	char	*test2 = "HelloWorld";
	char	*test3 = "";
	char	*test4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*test5 = "UPPERcase";

	printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_uppercase(test1));
	printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_uppercase(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_uppercase(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_uppercase(test4));
	printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_uppercase(test5));

	return (0);
}
