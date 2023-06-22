#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
