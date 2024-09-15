#include <stdio.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(void)
{
	char *test1 = "Hello, World!";
	char *test2 = "";
	char *test3 = "42 School";

	printf("Test 1:\n");
	ft_putstr(test1);
	ft_putchar('\n');

	printf("Test 2:\n");
	ft_putstr(test2);
	ft_putchar('\n');

	printf("Test 3:\n");
	ft_putstr(test3);
	ft_putchar('\n');

	return (0);
}
