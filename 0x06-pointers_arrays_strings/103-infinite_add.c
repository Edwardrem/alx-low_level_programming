#include "main.h"
#include <string.h>

/*
 * infinite_add - adds two numbers.
 *
 * The function adds two numbers represented as strings.
 * The result is stored in a buffer.
 * The function returns a pointer to the result.
 * If the result can not be stored in the buffer, the function returns 0.
 *
 * Parameters:
 *  n1 - a pointer to the first number.
 *  n2 - a pointer to the second number.
 *  r - a pointer to the buffer where the result will be stored.
 *  size_r - the size of the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, carry = 0;
	/* reverse the numbers */
	for (i = 0, j = strlen(n1) - 1; i < strlen(n1); i++, j--)
	{
		n1[i] = n1[j];
	}
	for (i = 0, j = strlen(n2) - 1; i < strlen(n2); i++, j--)
	{
		n2[i] = n2[j];
	}
	/* add the numbers */
	for (i = 0; i < size_r; i++)
	{
		r[i] = (n1[i] - '0') + (n2[i] - '0') + carry;
		carry = r[i] / 10;
		r[i] = r[i] % 10;
	}
	/* add the carry */
	if (carry > 0)
	{
		if (i == size_r)
		{
			return (0);
		}
		r[i] = carry;
		i++;
	}
	/* reverse the result */
	for (i = 0, j = strlen(r) - 1; i < strlen(r); i++, j--)
	{
		r[i] = r[j];
	}
	return (r);
}
