#include "shell.h"

/**
 * execute_command - Execute a command with its arguments.
 * @av: An array of strings containing the command and its arguments.
 * @argv: a string of first argument of main function
 * @envp: An array of strings containing environment variables.
 */
void execute_command(char *argv, char **av, char *envp[])
{
	pid_t pid = fork();
	int status;

	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execmd(av, envp);
		perror(argv);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (wait(&status) == -1)
		{
			perror("wait");
			exit(EXIT_FAILURE);
		}
	}
}

/**
 * main - Entry point for the shell program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * @envp: An array of strings containing environment variables.
 * Return: Always returns 0.
 */
int main(int argc, char *argv[], char *envp[])
{
	size_t n = 0;
	ssize_t nchars_read;
	char *lineptr = NULL, **av = NULL;
	int num_tokens = 0, i;

	(void)argc;

	while (1)
	{
		write(STDOUT_FILENO, "#cisfun$ ", 9);
		nchars_read = getline(&lineptr, &n, stdin);
		if (nchars_read == -1)
		{
			write(STDOUT_FILENO, "\n", 1);
			free(lineptr);
			exit(EXIT_FAILURE);
		}
		parseInput(lineptr, &av, &nchars_read, &num_tokens);
		if (strcmp(av[0], "exit") == 0)
		{
			free(av);
			free(lineptr);
			return (-1);
		}
		execute_command(argv[0], av, envp);
		for (i = 0; i < num_tokens; i++)
		{
			free(av[i]);
		}
		free(av);
	}
	free(lineptr);
	return (0);
}
