#include "main.h"
/**
 *_strchr -  function that locates a character in a string.
 *@s: is the pointer
 *@c: is the value
 *Return: pointer s if c is found else return NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}