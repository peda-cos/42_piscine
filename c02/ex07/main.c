#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	test1[] = "helloworld";
	char	test2[] = "HelloWorld";
	char	test3[] = "";
	char	test4[] = "abcdefghijklmnopqrstuvwxyz";
	char	test5[] = "upperCASE";

	// Test 1
	printf("Test 1 Before: \"%s\"\n", test1);
	ft_strupcase(test1);
	printf("Test 1 After : \"%s\"\n\n", test1);

	// Test 2
	printf("Test 2 Before: \"%s\"\n", test2);
	ft_strupcase(test2);
	printf("Test 2 After : \"%s\"\n\n", test2);

	// Test 3
	printf("Test 3 Before: \"%s\"\n", test3);
	ft_strupcase(test3);
	printf("Test 3 After : \"%s\"\n\n", test3);

	// Test 4
	printf("Test 4 Before: \"%s\"\n", test4);
	ft_strupcase(test4);
	printf("Test 4 After : \"%s\"\n\n", test4);

	// Test 5
	printf("Test 5 Before: \"%s\"\n", test5);
	ft_strupcase(test5);
	printf("Test 5 After : \"%s\"\n\n", test5);

	return (0);
}
