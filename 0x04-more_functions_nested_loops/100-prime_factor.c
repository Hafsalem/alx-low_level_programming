#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: alwayz 0 (success)
 */

int main(void)
{

	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	}
	}
	printf("%1d\n", maxf);

	return (0);
}
