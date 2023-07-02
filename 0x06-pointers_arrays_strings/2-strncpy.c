#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to copy
 * Return: a pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* copy n bytes of src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* fill the rest of dest with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
