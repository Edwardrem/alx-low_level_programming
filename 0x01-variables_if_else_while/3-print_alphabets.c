#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then uppercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
		putchar(f);
	for (f = 'A'; f <= 'Z'; f++)
		putchar(f);
	putchar('\n');

	return (0);
}
