#include "exercises.h"

void ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_put_two_digits(a);
            write(1, " ", 1);
            ft_put_two_digits(b);
            if (a != 98 || b != 99)
            {
                write(1, ", ", 2);
            }
            b++;
        }
        a++;
    }
}
