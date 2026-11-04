#include "exercises.h"

void ft_small_number_pairs(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 2)
    {
        b = a + 1;
        while (b <= 3)
        {
            ft_put_two_digits(a);
            write(1, " ", 1);
            ft_put_two_digits(b);
            if (a != 2 || b != 3)
            {
                write(1, ", ", 2);
            }
            b++;
        }
        a++;
    }
}
