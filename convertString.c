#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - function to coompare 2 strings
 * @s1: the first arg
 * @s2: the second arg
 *
 * Return: the result of the 2 strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * haystack_seearch - checks position of stack
 * @haystack: string to search
 * @needle: the substring to find
 *
 * Return: address of next char of haystack or NULL
 */
char *haystack_seearch(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - combine two strings
 * @final: the final argv
 * @local: the source buffer argv
 *
 * Return: pointer to final buffer
 */
char *_strcat(char *final, char *local)
{
	char *ret = final;

	while (*final)
		final++;
	while (*local)
		*final++ = *local++;
	*final = *local;
	return (ret);
}
