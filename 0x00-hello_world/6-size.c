#include<stdio.h>
/**
 * main -Entry point
 * Return: always 0 (success)
   */
int main(void)
{
	printf("Size of char:lu byte(s),");sizeof(char);
	printf("Size of an int:lu byte(s),");sizeof(int);
	printf("Size of long int:lu byte(s),");sizeof(long long int);
	printf("Size of float:lu byte(s),");sizeof(float);
	return (0);
}
