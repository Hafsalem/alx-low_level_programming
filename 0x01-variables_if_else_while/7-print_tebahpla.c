#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabetts in reverse
 * Return: always 0
 */
int main(void)
{
int n=122;

while (n >= 0)
{
	putchar(n);
	n--;
}
putchar('\n');
return (0);
}
