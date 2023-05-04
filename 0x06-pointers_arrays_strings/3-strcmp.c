#include "main.h"
/**
*_strcmp - compares two strings
*@s1: first string to cmp
*@s2: second string to cmp
*Return: 0 if equals; if not return (s1 - s2)
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	else
	{
		return (0);
	}
}
