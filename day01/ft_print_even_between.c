#include "exercises.h"

void ft_print_even_between(int low, int high)
{
    int i;
    char c;

    i = low;
    while (i <= high)
    {
        if (i % 2 == 0)
        {
            c = i + '0';
            write(1, &c, 1);
        }
        i++;
    }
}
