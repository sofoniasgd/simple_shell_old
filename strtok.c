#include <shell.h>
/**
 * _strtok - custom implementation of the strtok() function
 * @str: string to be parsed
 * @delim: delimiting byte
 * Return: string of the new token
 */
char *_strtok(char *str, const char *delim)
{
	int i, len;
	char *ret;
	/* create a static pointer to store starting location of the function*/
	static char *strc;
	/* both str and strc are NULL=> error!! */
	if (delim == NULL)
		{
			printf("%s", "error!");
			exit(EXIT_FAILURE); 
		}
	/*if str is NULL, str was specified on a previous call*/
	if (str != NULL)
	{
		strc = str;
	}
	/* if strc is null, end of etring has been reached */
	if (*strc == '\0')
	{
		return (NULL);
	}
	/*get strc length, find delimiter (handle dulpicate delimiters)*/
	len = strlen(strc);
	i = 0;
	while (i < len)
	{
		/*printf("i- %i", i);*/
		if (*(strc + i) == *delim || *(strc + i) == '\0')
		{
			break;
		}
		i++;
	}
	while (*(strc + i + 1) == *delim)
	{
		i++;
	}
	/* change delimiter location to null byte '\0'*/
	*(strc + i) = '\0';
	/* store starting location to ret */
	ret = strc;
	/* end of string, one last match(i==len)*/
	if (i == len)
	{
		strc = '\0';
	}
	/* else update starting location to after delim(now null byte) */
	else
	{
		strc = strc + i + 1;
	}
	return (ret);
	}
/**
 * main - prints entered lines
 *
 * Return: always 0
 */

int main(__attribute__((unused))int ac, __attribute__((unused))char *av[])
{

size_t n;
char *line, *words;
ssize_t ret;
char *delim;
printf("$ ");
words = NULL;
n = 0;
/* read a line of data from stdin to *line */
ret = getline(&line, &n, stdin);
if (ret == (-1))
	return (0);

delim = " \n";
/*print n and ret*/
printf("&n ==> %ld\n", n);
printf("ret ==> %ld\n", ret);
/* print the words from stdin */
words = _strtok(line, delim);
while (words != NULL)
	{
	printf("-word- %s -\n", words);
	words = _strtok(NULL, delim);
	}
printf("%s\n", "end");
return (0);
}
