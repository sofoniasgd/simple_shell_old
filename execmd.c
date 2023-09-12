#include "shell.h"
/**
 * execmd - Execute a command in a child process.
 * @av: An array of strings containing the command and its arguments.
 * @argv: a main function first argument
 * @envp: An array of strings containing environment variables.
 */
void execmd(char **av, char **envp)
{
	char *command = NULL;
	if (av && av[0])
	{
		command = av[0];
		execve(command, av, envp);
	}
	else
		exit(EXIT_FAILURE);
}

