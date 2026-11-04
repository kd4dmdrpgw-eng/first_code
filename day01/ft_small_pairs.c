#include "exercises.h"

void ft_small_pairs(void)
{
    char c;
    int i;
    int j;

    i = 0;
    while (i <= 2)
    {
        j = i + 1;
        while (j <= 2)
        {
            c = i + '0';
            write(1, &c, 1);
            c = j + '0';
            write(1, &c, 1);
            if (i != 1 || j != 2)
            {
                write(1, " ", 1);
            }
            j++;
        }
        i++;
    }
}
