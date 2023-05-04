#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 * Return: the result of s
 */
char *cap_string(char *s)
{
	int i = 1;
	int j = 0;
	char separ[13] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	if (*s >= 'a' && *s <= 'z')
	{
		*s -= ('a' - 'A');
	}
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 13 ; j++)
		{
			if (*(s + i) == separ[j])
			{
				if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
				{
					*(s + i + 1) -= ('a' - 'A');
				}
			}
		}
		i++;
	}
	return (s);
}
