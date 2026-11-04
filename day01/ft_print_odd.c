#include "exercises.h"

void ft_print_odd(void)
{
    char c;
    int i;

    i = 0;
    while (i <= 9)
    {
        if (i % 2 != 0)
        {
            c = i + '0';
            write(1, &c, 1);
        }
        i++;
    }
}
