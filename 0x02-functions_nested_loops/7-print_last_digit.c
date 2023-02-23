#include "main.h"
/**
 * print_last_digit - Prints last digit
 * @n: The numberbto be treated
 * Return: Value of last digit num
 */
int print_last_digit(int n)
{
int last;

last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + 0);
return (last);
}
