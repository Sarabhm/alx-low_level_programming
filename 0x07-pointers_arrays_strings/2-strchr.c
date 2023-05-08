#include "main.h"
/**
 *_strchr -  function that locates a character in a string.
 *@s: is the string
 *@c: is the char to find
 *Return: pointer s if c is found else return 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
