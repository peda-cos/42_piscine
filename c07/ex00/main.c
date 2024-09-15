#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Hello, 42!";
	str2 = ft_strdup(str1);
	if (str2)
		printf("Original: %s\nCopy: %s\n", str1, str2);
	else
		printf("Memory allocation failed.\n");

	return (0);
}
