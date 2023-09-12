#ifndef SHELL
#define SHELL

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

void execmd(char **av, char **envp);
void parseInput(char *lineptr, char ***av, ssize_t *nchars, int *num_tokens);
#endif
