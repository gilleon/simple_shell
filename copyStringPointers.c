#include "shell.h"

/**
 * _stringcopy - copies a string
 * @final: the final argv
 * @local: the local value
 *
 * Return: pointer to final
 */
char *_stringcopy(char *final, char *local)
{
	int i = 0;

	if (final == local || local == 0)
		return (final);
	while (local[i])
	{
		final[i] = local[i];
		i++;
	}
	final[i] = 0;
	return (final);
}

/**
 * _stringdupl - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_stringdupl(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 *_puts - prints an input string
 *@str: the string to be printed
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUFF_SIZE];

	if (c == BUFF_FLUSH || i >= WRITE_BUFF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUFF_FLUSH)
		buf[i++] = c;
	return (1);
}
