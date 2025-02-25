#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_is_negative(int n);

int main (void)
{
    printf("The input was: 42\n");
    ft_is_negative(42);
    write(1, "\n", 1);

    printf("The input was: -5\n");
    ft_is_negative(-5);
    write(1, "\n", 1);

    printf("The input was: 0\n");
    ft_is_negative(0);
    ft_putchar('\n');

    return (0);
}