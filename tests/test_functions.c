#include "exercises.h"
#include <assert.h>
#include <limits.h>
#include <string.h>

int main(void)
{
    int a = 17;
    int b = 5;
    int quotient;
    int remainder;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    char buffer[64];
    char high[] = {(char)255, '\0'};

    assert(ft_max(-3, -7) == -3);
    assert(ft_max(5, 5) == 5);
    assert(ft_max(INT_MIN, INT_MAX) == INT_MAX);
    assert(ft_is_even(0) && ft_is_even(-2) && !ft_is_even(-3));
    assert(ft_sum_to(10) == 55 && ft_sum_to(0) == 0 && ft_sum_to(-2) == 0);
    assert(ft_count_even(5) == 3 && ft_count_even(0) == 1 && ft_count_even(-1) == 0);
    ft_swap(&a, &b);
    assert(a == 5 && b == 17);
    ft_swap(&a, &a);
    assert(a == 5);
    ft_div_mod(17, 5, &quotient, &remainder);
    assert(quotient == 3 && remainder == 2);
    ft_div_mod(-17, 5, &quotient, &remainder);
    assert(quotient == -3 && remainder == -2);
    a = 17;
    b = 5;
    ft_ultimate_div_mod(&a, &b);
    assert(a == 3 && b == 2);
    ft_ft(&a);
    assert(a == 42);
    a = 0;
    ft_ultimate_ft(&p8);
    assert(a == 42);
    assert(ft_strlen("") == 0 && ft_strlen("hello") == 5);
    assert(ft_strcpy(buffer, "hello") == buffer);
    assert(strcmp(buffer, "hello") == 0);
    assert(ft_strcat(buffer, " world") == buffer);
    assert(strcmp(buffer, "hello world") == 0);
    ft_strcpy(buffer, "");
    ft_strcat(buffer, "");
    assert(buffer[0] == '\0');
    assert(ft_strcmp("abc", "abc") == 0);
    assert(ft_strcmp("abc", "abd") < 0 && ft_strcmp("ab", "a") > 0);
    assert(ft_strcmp(high, "a") > 0);
    assert(ft_str_is_alpha("") && ft_str_is_alpha("aZ") && !ft_str_is_alpha("a1"));
    assert(ft_str_is_numeric("") && ft_str_is_numeric("0129") && !ft_str_is_numeric("-1"));
    assert(ft_str_is_lowercase("") && ft_str_is_lowercase("abc") && !ft_str_is_lowercase("A"));
    assert(ft_str_is_printable("") && ft_str_is_printable(" ~") && !ft_str_is_printable("\n"));
    ft_strcpy(buffer, "aZ-19");
    assert(ft_strupcase(buffer) == buffer && strcmp(buffer, "AZ-19") == 0);
    assert(ft_strlowcase(buffer) == buffer && strcmp(buffer, "az-19") == 0);
    ft_strcpy(buffer, "hELLO, wORLD! 42WORDS a+b");
    assert(ft_strcapitalize(buffer) == buffer);
    assert(strcmp(buffer, "Hello, World! 42words A+B") == 0);
    ft_strcpy(buffer, "");
    ft_strcapitalize(buffer);
    assert(buffer[0] == '\0');

    ft_putchar('X'); ft_putchar('\n');
    ft_repeat('A', 3); ft_repeat('B', 0); ft_repeat('C', -1); ft_putchar('\n');
    ft_is_negative(-1); ft_is_negative(0); ft_is_negative(1); ft_putchar('\n');
    ft_sign(-5); ft_sign(0); ft_sign(7); ft_putchar('\n');
    ft_print_even(); ft_putchar('\n');
    ft_print_odd(); ft_putchar('\n');
    ft_print_between(2, 7); ft_print_between(7, 2); ft_putchar('\n');
    ft_print_even_between(2, 7); ft_print_even_between(7, 2); ft_putchar('\n');
    ft_grid(); ft_putchar('\n');
    ft_small_pairs(); ft_putchar('\n');
    ft_pairs(); ft_putchar('\n');
    ft_put_digit(9); ft_putchar('\n');
    ft_put_three(1, 2, 3); ft_putchar('\n');
    ft_print_comb(); ft_putchar('\n');
    ft_put_two_digits(0); ft_put_two_digits(99); ft_putchar('\n');
    ft_small_number_pairs(); ft_putchar('\n');
    ft_print_comb2(); ft_putchar('\n');
    ft_putstr("hello"); ft_putstr(""); ft_putchar('\n');
    return (0);
}
