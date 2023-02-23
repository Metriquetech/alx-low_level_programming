#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print all num from input to 98
 * @n: the starting num
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d,", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d,", n++);
printf("%d\n", n);
}
}
