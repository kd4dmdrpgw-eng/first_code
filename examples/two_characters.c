#include "exercises.h"

int main(void)
{
    char c;

    c = 'K';
    write(1, &c, 1);
    c = 'A';
    write(1, &c, 1);
    return (0);
}
