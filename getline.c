#include "shell.h"

/**
 * _getline - custom getline() implementation
 * uses read() function
 * Return: char pointer to read line
 */
char *_getline()
{
	int i = 0;
	ssize_t len;
	/* use static buffer with max size 1024 and flsuh it */
	static char buff[1024];

	while (i < 1024)
	{
		buff[i] = 0;
		i++;
	}
	/* call read and handle errors */
	len = read(STDIN_FILENO, buff, sizeof(buff));
	if (len == -1)
	{
		/* read failure, done writing data */
		write(STDOUT_FILENO, "\n", 1);
		exit(EXIT_FAILURE);
	}
	/* id len == 0, EOF is reached with/out input */
	else if (len == 0)
	{
		/* EOF with notext exit program */
		if (buff[0] == '\0')
		{
			if(isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			exit(EXIT_SUCCESS);
		}
		return (buff);
	}
	/* normal input */
	return (buff);
}
