#include "shell.h"
/**
 *
 */

int main(int ac, char **av)
{
	size_t n = 0;
	ssize_t nchars_read;
	char *lineptr, *lineptr_copy = NULL;

	(void)ac; (void)av;
	while (1)
	{
		write(STDOUT_FILENO, "#cisfun$ ", 9);
		nchars_read = getline(&lineptr, &n, stdin);

		if (nchars_read == -1)
            return (-1);
		lineptr_copy = malloc(sizeof(char) * nchars_read);
		if (lineptr_copy== NULL)
			return (-1);
		strcpy(lineptr_copy, lineptr);
		token = strtok(lineptr, delim);
		while (token != NULL)
		{
			num_tokens++;
			token = strtok(NULL, delim);
        }
		num_tokens++;
	}
	free(lineptr);
	return (0);
	
}
