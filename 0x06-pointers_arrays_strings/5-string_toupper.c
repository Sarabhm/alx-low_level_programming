#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: string to modify
 * Return: the result of s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= ('a' - 'A');
		}
		i++;
	}
	return (s);
}
