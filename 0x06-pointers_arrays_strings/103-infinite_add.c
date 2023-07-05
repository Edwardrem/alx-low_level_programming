#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char tmp;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: pointer to the first number
 * @n2: pointer to the second number
 * @r: pointer to the buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result, or 0 if the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = (len1 > len2) ? len1 : len2;
	int i, carry = 0;

	if (max_len + 1 >= size_r)
	{
		return (0);
	}

	for (i = 0; i < max_len; i++)
	{
		int digit1 = (i < len1) ? n1[len1 - i - 1] - '0' : 0;
		int digit2 = (i < len2) ? n2[len2 - i - 1] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		r[i] = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (carry > 0)
	{
		r[max_len++] = carry + '0';
	}

	r[max_len] = '\0';
	rev_string(r);

	return (r);
}
