#include "shell.h"

/**
 * main - main function
 * @count: argc
 * @vector: argv
 *
 * Return: 0 on success, 1 on error
 */
int main(int count, char **vector)
{
	info_t info[] = { INFO_INIT };
	int fd = 2;

	asm ("mov %1, %0\n\t"
		"add $3, %0"
		: "=r" (fd)
		: "r" (fd));

	if (count == 2)
	{
		fd = open(vector[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_eputs(vector[0]);
				_eputs(": 0: Can't open ");
				_eputs(vector[1]);
				_eputchar('\n');
				_eputchar(BUFF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfd = fd;
	}
	gather_env_list(info);
	read_history(info);
	hsh(info, vector);
	return (EXIT_SUCCESS);
}
