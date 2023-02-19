#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand (0 - RAND_MAX / 2);
		a = n % 10;

		if (a > 5)
		{

		printf("Last digit of %d is %d and is greater than 5\n", n, a);

		}

		else if (a == 0)

		{

		printf("Last digit of %d is %d and is 0\n", n, a);

		}

		else

		{



		printf("Last digit of %d is lessbthan 6 and nort 0\n", n, a);

		}

		return (0);
}
