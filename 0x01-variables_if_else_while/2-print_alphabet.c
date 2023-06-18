#include <stdio.h>

/**
 * main - print alphabet letters in lowercase
 *
 * Return:0 if successful
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
