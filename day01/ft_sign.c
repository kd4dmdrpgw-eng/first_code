#include "exercises.h"

void ft_sign(int n)
{
    if (n > 0)
    {
        write(1, "+", 1);
    }
    else if (n == 0)
    {
        write(1, "0", 1);
    }
    else
    {
        write(1, "-", 1);
    }
}
