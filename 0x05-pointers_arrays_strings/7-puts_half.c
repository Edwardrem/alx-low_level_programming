#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a char
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int n;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	n = (len + 1) / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
