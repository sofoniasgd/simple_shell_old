#include "shell.h"
/**
 * _strcpy - function that copy from source to distination
 * @destination: copy to
 * @source: copy from
 * Return: a pointer to start of destination string
 */
char *_strcpy(char *destination, const char *source)
{
	char *dest = destination;
/* Store the starting address of destination for returning later*/

/* Copy characters from sour to desti until a null-term is encoun in source*/
	while (*source != '\0')
	{
		*destination = *source;/* Copy character*/
		destination++;/* Move to the next character in destination*/
		source++;/* Move to the next character in source*/
	}
	*destination = '\0';/* Null-terminate the destination string*/
	return (dest);/*Return a pointer to the start of the destination string*/
}
