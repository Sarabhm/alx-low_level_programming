#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: seconf string
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b;
	char *cop;
	char *con;

	a = 0;
	b = 0;
	cop = s1;

	if (s1)
		while (*cop++)
			a++;
	else
		s1 = "";

	cop = s2;
	if (s2)
		while (*cop++)
			b++;
	else
		s2 = "";

	con = malloc(a + b + 1);
	if (!con)
		return (NULL);

	cop = con;
	while (*s1)
	{
		*cop = *s1;
		cop++;
		s1++;
	}
	while (*s2)
	{
		*cop = *s2;
		cop++;
		s2++;
	}
	*cop = '\0';
	return (con);
}
