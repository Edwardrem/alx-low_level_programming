#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: nothing.
 */
void print_number(int n)
{
	unsigned int num;
	int i, j, div;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	div = 1;
	i = 1;
	while (num / div >= 10)
	{
		div *= 10;
		i++;
	}

	for (j = 0; j < i; j++)
	{
		_putchar((num / div) + '0');
		num %= div;
		div /= 10;
	}
}
