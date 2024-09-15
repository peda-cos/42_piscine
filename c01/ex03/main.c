#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int     main(void)
{
    int a = 20;
    int b = 3;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);
    printf("Div: %d, Mod: %d\n", div, mod);
    return (0);
}
