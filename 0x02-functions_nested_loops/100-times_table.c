#include "main.h"

/**
 *  * print_times_table - prints the n times table
 *   * @n: the times table to print
 *    *
 *     * Return: void
 *      */
void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; j++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('0' + i * j);
			if (j < n)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
