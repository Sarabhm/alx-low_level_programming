#include "main.h"
/**
 * rev_string - fucntion that reverses a string
 * @s: is the character string
 * Return: always 0
 */
void rev_string(char *s)
{
	int len, i, j;
		len = 0;
	j = 0;
	char *t;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		*(t + i) = *(s + len - 1 - i);
	}
	while (j < len)
	{
		*(s + j) = *(t + j);
		j++;
	}
}
