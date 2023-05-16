#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns pointer to new alloc space in memory
 * @str: input string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int length, a;


	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	string = malloc(sizeof(char) * (length + 1));
	if (string == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < length; a++)
	{
		string[a] = str[a];
	}
	string[length] = '\0';
	return (string);
}
