#include "shell.h"
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
	int num_tokens = 0, i, status;
	pid_t pid;

	(void)argc;
	/* start shell */
	while (1)
	{
		/* print prompt, read command from stdin and handle errors */
		write(STDOUT_FILENO, "#cisfun$ ", 9);
		nchars_read = getline(&lineptr, &n, stdin);
		if (nchars_read == -1)
		{
			write(STDOUT_FILENO, "\n", 2);
			free(lineptr);
			return (-1);
		}
		/* tokenize the command line, fork and execute from child process*/
		parseInput(lineptr, &av, &nchars_read, &num_tokens);
		pid = fork();

		if (pid == -1)
			exit(EXIT_FAILURE);
		else if (pid == 0)
		{
			execmd(av, envp);
			perror(argv[0]);
			exit(EXIT_FAILURE);
		}
		/* wait for child pr, free memory holding tokens and command */
		else
		{
			if (wait(&status) == -1)
				exit(EXIT_FAILURE);
		}
		for (i = 0; i < num_tokens; i++)
		{
			free(av[i]);
		}
		free(av);
	}
	free(lineptr);
	return (0);
}
