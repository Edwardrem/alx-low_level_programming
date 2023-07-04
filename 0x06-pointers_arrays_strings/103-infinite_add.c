#include "main.h"

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
	int i, j, n1_len, n2_len, max_len, sum, carry;

	for (n1_len = 0; n1[n1_len]; n1_len++)
		;
	for (n2_len = 0; n2[n2_len]; n2_len++)
		;
	max_len = n1_len > n2_len ? n1_len : n2_len;
	if (max_len + 1 >= size_r)
		return (0);
	carry = 0;
	for (i = n1_len - 1, j = n2_len - 1, max_len--; max_len >= 0; i--, j--, max_len--)
	{
		sum = carry;
		sum += i >= 0 ? n1[i] - '0' : 0;
		sum += j >= 0 ? n2[j] - '0' : 0;
		carry = sum / 10;
		r[max_len + 1] = sum % 10 + '0';
	}
	r[max_len + 1] = '\0';
	if (carry)
	{
		if (max_len < 0)
			return (0);
		r[max_len--] = carry + '0';
	}
	else
		max_len++;
	for (i = 0; r[max_len]; i++, max_len++)
		r[i] = r[max_len];
	r[i] = '\0';
	return (r);
}
