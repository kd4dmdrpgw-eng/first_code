#include "exercises.h"

void ft_put_two_digits(int n)
{
    char c;

    c = (n / 10) + '0';
    write(1, &c, 1);
    c = (n % 10) + '0';
    write(1, &c, 1);
}
