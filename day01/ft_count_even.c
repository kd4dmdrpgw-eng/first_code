#include "exercises.h"

int ft_count_even(int n)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            count++;
        }
        i++;
    }
    return (count);
}
