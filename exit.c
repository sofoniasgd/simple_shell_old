#include "shell.h"
/**
 * _exitstatus- Exit the shell with a specified status code.
 * @av: An array of strings containing the "exit" command
 *		and its argument (if any).
 */
void _exitstatus(char **av)
{
	int status_code;

	if (av[1])
	{
		status_code = _atoi(av[1]);
		free(av[0]);
		free(av[1]);
		free(av);
		exit(status_code);
	}
	else
	{
		free(av[0]);
		free(av);
		exit(0);
	}
}
