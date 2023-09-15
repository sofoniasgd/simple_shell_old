#include "shell.h"
/**
 * execmd - Execute a command in a child process.
 * @av: An array of strings containing the command and its arguments.
 * @envp: An array of strings containing environment variables.
 */
void execmd(char **av, char **envp)
{
	char *command = NULL, *path = getenv("PATH"), *token, *path_copy, *full_path;

	if (av && av[0])
	{
		command = av[0];
		if (strchr(command, '/') == NULL)
		{
			path_copy = strdup(path);
			token = strtok(path_copy, ":");
			while (token != NULL)
			{
				full_path = malloc(strlen(token) + strlen(command) + 2);
				if (full_path != NULL)
				{
					strcpy(full_path, token);
					strcat(full_path, "/");
					strcat(full_path, command);
					if (access(full_path, X_OK) == 0)
					{
						execve(full_path, av, envp);
						perror("execve");
						free(full_path);
						exit(EXIT_FAILURE);
					}
					free(full_path);
				}
				token = strtok(NULL, ":");
			}
			free(path_copy);
		}
		execve(command, av, envp);
	}
	else
		exit(EXIT_FAILURE);
}

