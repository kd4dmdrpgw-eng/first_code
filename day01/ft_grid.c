#include "exercises.h"

void ft_grid(void)
{
    int j;
    int i;
    char c;

    i = 0;
    while (i <= 2)
    {
        j = 0;
        while (j <= 2)
        {
            c = i + '0';
            write(1, &c, 1);
            c = j + '0';
            write(1, &c, 1);
            if (i != 2 || j != 2)
            {
                write(1, " ", 1);
            }
            j++;
        }
        i++;
    }
}
