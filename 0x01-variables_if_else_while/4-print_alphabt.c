#include <stdio.h>

/**
 * main - prints lowercase alphabet letters save for q and e
 *
 * Return: 0 if successful
 */
int main(void)
{
	char q;

	for (q = 'a'; q <= 'z'; q++)
		if (q != 'q' && q != 'e')
			putchar(q);
	putchar('\n');

	return (0);
}
