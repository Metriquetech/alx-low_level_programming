#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');
	return (0);
}
