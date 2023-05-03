#include "main.h"
/**
 * rev_string - fucntion that reverses a string
 * @s: is the character string
 * Return: always 0
 */
void rev_string(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	char t[len];
	int i = 0;

	for (i = 0; i < len; i++)
	{
		t[i] = *(s + len - 1 - i);
	}
	j = 0;

	while (j < len)
	{
		*(s + j) = *(t + j);
		j++;
	}
}
