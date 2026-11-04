#include "exercises.h"

void ft_print_between(int low, int high)
{
    int i;
    char c;

    i = low;
    while (i <= high)
    {
        c = i + '0';
        write(1, &c, 1);
        i++;
    }

}
