#include "main.h"
/**
 *@c - is char to be checked
 * Return: 1 if char is lc otherwise 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
