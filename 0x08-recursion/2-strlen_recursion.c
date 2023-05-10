#include "main.h"
/**
 * _strlen_recursion - gives the length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
