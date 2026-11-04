#include "exercises.h"

void ft_put_digit(int n)
{
    char c;

    c = n + '0';
    write(1, &c, 1);
}
