#include "exercises.h"

int main(void)
{
    char text[32];

    ft_repeat('K', 2);
    ft_putchar(' ');
    ft_repeat('M', 3);
    ft_putchar('\n');
    ft_print_even_between(2, 7);
    ft_putchar('\n');
    ft_strcpy(text, "42 ");
    ft_strcat(text, "Istanbul");
    ft_putstr(text);
    ft_putchar('\n');
    return (0);
}
