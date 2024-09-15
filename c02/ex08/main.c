#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	test1[] = "HELLOWORLD";
	char	test2[] = "HelloWorld";
	char	test3[] = "";
	char	test4[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	test5[] = "UPPERcase";

	// Test 1
	printf("Test 1 Before: \"%s\"\n", test1);
	ft_strlowcase(test1);
	printf("Test 1 After : \"%s\"\n\n", test1);

	// Test 2
	printf("Test 2 Before: \"%s\"\n", test2);
	ft_strlowcase(test2);
	printf("Test 2 After : \"%s\"\n\n", test2);

	// Test 3
	printf("Test 3 Before: \"%s\"\n", test3);
	ft_strlowcase(test3);
	printf("Test 3 After : \"%s\"\n\n", test3);

	// Test 4
	printf("Test 4 Before: \"%s\"\n", test4);
	ft_strlowcase(test4);
	printf("Test 4 After : \"%s\"\n\n", test4);

	// Test 5
	printf("Test 5 Before: \"%s\"\n", test5);
	ft_strlowcase(test5);
	printf("Test 5 After : \"%s\"\n\n", test5);

	return (0);
}
