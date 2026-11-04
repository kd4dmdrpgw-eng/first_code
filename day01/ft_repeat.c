#include "exercises.h"

void ft_repeat(char c, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        write(1, &c, 1);
        i++;
    }
}
