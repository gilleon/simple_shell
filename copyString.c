#include "shell.h"

/**
 **_strncpy - copies a string
 *@final: the finalination string to be copied to
 *@local: the source string
 *@n: the amount of characters to be copied
 *Return: the concatenated string
 */
char *_strncpy(char *final, char *local, int n)
{
	int i, j;
	char *s = final;

	i = 0;
	while (local[i] != '\0' && i < n - 1)
	{
		final[i] = local[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			final[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings
 *@final: the first string
 *@local: the second string
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *final, char *local, int n)
{
	int i, j;
	char *s = final;

	i = 0;
	j = 0;
	while (final[i] != '\0')
		i++;
	while (local[j] != '\0' && j < n)
	{
		final[i] = local[j];
		i++;
		j++;
	}
	if (j < n)
		final[i] = '\0';
	return (s);
}

/**
 **_strchr - locates a character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
