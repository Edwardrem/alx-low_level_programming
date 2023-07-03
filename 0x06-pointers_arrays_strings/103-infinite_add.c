#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to result or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	m = 0;
	for (k = i - 1, l = j - 1, n = 0; k >= 0 || l >= 0 || n; k--, l--, m++)
	{
		n += (k >= 0 ? n1[k] - '0' : 0) + (l >= 0 ? n2[l] - '0' : 0);
		if (m >= size_r - 1 && (k > 0 || l > 0 || n > 9))
			return (0);
		r[m] = n % 10 + '0';
		n /= 10;
	}
	r[m] = '\0';
	for (m--, k = 0; k < m; k++, m--)
	{
		n = r[k];
		r[k] = r[m];
		r[m] = n;
	}
	return (r);
}
