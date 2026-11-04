#include "exercises.h"

void ft_print_comb(void)
{
    int i;
    int j;
    int k;

    i = 0;
    while (i <= 7)
    {
        j = i + 1;
        while (j <= 8)
        {
            k = j + 1;
            while (k <= 9)
            {
                ft_put_three(i, j, k);
                if (i != 7 || j != 8 || k != 9)
                {
                    write(1, ", ", 2);
                }
                k++;
            }
            j++;
        }
        i++;
    }
}
