#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to use from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* find the end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* append n bytes of src to dest */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add the terminating null byte */
	dest[i] = '\0';
	return (dest);
}
