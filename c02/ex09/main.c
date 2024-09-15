#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	test1[] = "hello world! 42foo bar";
	char	test2[] = "HELLO WORLD";
	char	test3[] = "cOdInG iS fuN";
	char	test4[] = "this is a test";
	char	test5[] = "123hello WORLD";

	printf("Test 1 Before: \"%s\"\n", test1);
	ft_strcapitalize(test1);
	printf("Test 1 After : \"%s\"\n\n", test1);

	printf("Test 2 Before: \"%s\"\n", test2);
	ft_strcapitalize(test2);
	printf("Test 2 After : \"%s\"\n\n", test2);

	printf("Test 3 Before: \"%s\"\n", test3);
	ft_strcapitalize(test3);
	printf("Test 3 After : \"%s\"\n\n", test3);

	printf("Test 4 Before: \"%s\"\n", test4);
	ft_strcapitalize(test4);
	printf("Test 4 After : \"%s\"\n\n", test4);

	printf("Test 5 Before: \"%s\"\n", test5);
	ft_strcapitalize(test5);
	printf("Test 5 After : \"%s\"\n\n", test5);

	return (0);
}
