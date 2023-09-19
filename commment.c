#include "shell.h"

/**
 * remove_comment - remeves comment from line
 * @av: tokenized command input
 * @num_tokens: number of tokens in command
 * Return: none
 */
void remove_comment(char **av, int num_tokens)
{
	int i, j = 0;
	/* find location of comment indicator '#' */
	for (i = 0; i < num_tokens; i++)
	{
		while (*(av[i] + j) != '\0')
		{
			if (*(av[i] + j) == '#')
			{
				break;
			}
			j++
		}
	}
	/* didnt find '#'=> command doesnt contain comments.exit */
	if (i == num_tokens)
		exit(EXIT_SUCCESS);
	/*if '#' is in its own token(eg foo # bar). free token */
	if (j == 0)
	{
		free(*av[i]);
		*av[i] = NULL;
		i++;
	}
	/*if '#' mixed with other chars, remove chars after it(eg, foo ba#r)*/
	else
	{
		*av[i] + j = '\0';
		j++;
		while (*(av[i] + j) != '\0')
		{
			*(av[i] + j) = '\0';
			j++;
		}
		i++;
	}
	/* free any subsequent tokens and null terminate array, then exit */
	for (i; i < num_tokens; i++)
		free(*av[i]);
	*av[i] = NULL;
	exit(EXIT_SUCCESS);
}
