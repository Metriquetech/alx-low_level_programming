#include "main.h"
/**
 * _islower - Checks for lower case character
 * @c: The char to be checked
 * Return: 1 for lowercase character 0 for anythi
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
