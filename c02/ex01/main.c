#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest1[20] = {0};
	char	src1[] = "Hello, World!";
	unsigned int	n1 = 15;

	char	dest2[20] = {0};
	char	src2[] = "";
	unsigned int	n2 = 5;

	char	dest3[20] = {0};
	char	src3[] = "42 School";
	unsigned int	n3 = 20;

	char	dest4[20] = {0};
	char	src4[] = "Short";
	unsigned int	n4 = 3;

	printf("Test 1:\n");
	printf("Source: \"%s\", n = %u\n", src1, n1);
	ft_strncpy(dest1, src1, n1);
	printf("Destination: \"%s\"\n\n", dest1);

	printf("Test 2:\n");
	printf("Source: \"%s\", n = %u\n", src2, n2);
	ft_strncpy(dest2, src2, n2);
	printf("Destination: \"%s\"\n\n", dest2);

	printf("Test 3:\n");
	printf("Source: \"%s\", n = %u\n", src3, n3);
	ft_strncpy(dest3, src3, n3);
	printf("Destination: \"%s\"\n\n", dest3);

	printf("Test 4:\n");
	printf("Source: \"%s\", n = %u\n", src4, n4);
	ft_strncpy(dest4, src4, n4);
	printf("Destination: \"%s\"\n\n", dest4);

	return (0);
}
