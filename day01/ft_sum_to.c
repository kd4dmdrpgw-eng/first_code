#include "exercises.h"

int ft_sum_to(int n)
{
    int sum;
    int i;

    i = 1;
    sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    return (sum);
}
