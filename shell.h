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
int isdelim(char stringc, const char *delim);
char *_strcpy(char *destination, const char *source);
int _strcmp(const char *str1, const char *str2);
size_t _strlen(const char *str);
char *_strcat(char *dest, const char *src);
char *_strdup(const char *str);
char *_strchr(const char *str, int c);
int _atoi(const char *str);
void _exitstatus(char **av);
void remove_comment(char **av, int *num_tokens);
void flushbuffer(char *buff);
char *pipe_getline(char *buff);

#endif
