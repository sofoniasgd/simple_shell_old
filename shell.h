#ifndef SHELL
#define SHELL

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

void execmd(char **av, char **envp);
void parseInput(char *lineptr, char ***av, ssize_t *nchars, int *num_tokens);
void execute_command(char *argv, char **av, char *envp[]);
int append_path(char **av);
void print_environment(char *envp[]);
char *_getline();
char *_strtok(char *str, const char *delim);

#endif
