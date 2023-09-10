#include "shell.h"
/**
 *
 */

int main(int ac, char **av)
{
	size_t n = 0;
	ssize_t nchars_read;
	char *lineptr;

	(void)ac; (void)av;
	while (1)
	{
		write(STDOUT_FILENO, "#cisfun$ ", 9);
		nchars_read = getline(&lineptr, &n, stdin);

		if (nchars_read == -1)
            return (-1);
	}
	free(lineptr);
	return (0);
	
}
