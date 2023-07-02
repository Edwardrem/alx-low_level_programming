#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer to store the result
 * @size_r: the buffer size
 *
 * Return: pointer to the result, or 0 if it can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry = 0;
	int len1 = strlen(n1), len2 = strlen(n2);

	for (i = len1 - 1, j = len2 - 1, k = size_r - 1; k >= 0; i--, j--, k--)
	{
		int sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		r[k] = sum % 10 + '0';
		carry = sum / 10;
	}

	if (carry > 0 || i >= 0 || j >= 0)
		return (0);

	memmove(r, r + k + 1, size_r - k - 1);
	r[size_r - k - 1] = '\0';

	return (r);
}
