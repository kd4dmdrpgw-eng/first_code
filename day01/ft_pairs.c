#include "exercises.h"

void ft_pairs(void)
{
    char c;
    int i;
    int j;

    i = 0;
    while (i <= 8)
    {
        j = i + 1;
        while (j <= 9)
        {
            c = i + '0';
            write(1, &c, 1);
            c = j + '0';
            write(1, &c, 1);
            if (i != 8 || j != 9)
            {
                write(1, ", ", 2);
            }
            j++;
        }
        i++;
    }
}
