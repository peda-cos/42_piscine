#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest1[50];
	char	src1[] = "Hello, World!";
	
	char	dest2[50];
	char	src2[] = "";
	
	char	dest3[50];
	char	src3[] = "42 School";

	printf("Test 1:\n");
	printf("Source: \"%s\"\n", src1);
	ft_strcpy(dest1, src1);
	printf("Destination: \"%s\"\n\n", dest1);

	printf("Test 2:\n");
	printf("Source: \"%s\"\n", src2);
	ft_strcpy(dest2, src2);
	printf("Destination: \"%s\"\n\n", dest2);

	printf("Test 3:\n");
	printf("Source: \"%s\"\n", src3);
	ft_strcpy(dest3, src3);
	printf("Destination: \"%s\"\n\n", dest3);

	return (0);
}
