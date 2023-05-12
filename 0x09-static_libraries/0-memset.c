#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: is the pointer to a char
 * @n: the number of bytes
 * @b: is the value
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
