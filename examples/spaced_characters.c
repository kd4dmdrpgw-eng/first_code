#include "exercises.h"

int main(void)
{
    char c;

    c = 'B';
    write(1, &c, 1);
    c = ' ';
    write(1, &c, 1);
    c = 'C';
    write(1, &c, 1);
    return (0);
}
