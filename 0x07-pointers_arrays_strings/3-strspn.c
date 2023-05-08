#include "main.h"
#include <stdio.h>

/**
 * _strspn - Get the length of a prefix substring
 *
 * @s: The character to print
 *
 * @accept: Character
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(s + i) != *(accept + j) && *(accept + j) != '\0')
		{
			j++;
		}
		if (*(accept + j) == '\0')
		{
			return (i);
		}
		i++;
	}
	return (i);

}
