#include "main.h"
/**
 * _isalpha - check for char alphabet
 * @c : char to be checked
 * Return : Returns 1 if c is a letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
