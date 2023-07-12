#include "main.h"

/**
 * word_count - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int word_count(char *str)
{
	int i, wc = 0, state = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			wc++;
		}
	}
	return (wc);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, l, wc, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < wc; i++)
	{
		while (str[j] == ' ')
			j++;

		for (k = j, len = 0; str[k] && str[k] != ' '; k++)
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (l = 0; l < i; l++)
				free(words[l]);
			free(words);
			return (NULL);
		}

		for (k = j, l = 0; str[k] && str[k] != ' '; k++, l++)
			words[i][l] = str[k];
		words[i][l] = '\0';

		j += len;
	}
	words[i] = NULL;

	return (words);
}
