#include "exercises.h"

int main(void)
{
    char c;

    c = 'A';
    write(1, &c, 1);
    c = ' ';
    write(1, &c, 1);
    c = 'B';
    write(1, &c, 1);
    c = '\n';
    write(1, &c, 1);
    c = 'C';
    write(1, &c, 1);
    return (0);
}
