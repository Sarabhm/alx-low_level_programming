#include "main.h"

/**
 * _strstr - Locating substring
 *
 * @needle: substring to look for
 *
 * @haystack: String input
 *
 * Return: Pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, l;
		i = 0;
	while (*(haystack + i) != '\0')
	{
		j = 0;
		l = i;
		while (*(needle + j) != '\0' && *(haystack + l) == *(needle + j))
		{
			l++;
			j++;
		}
		if (*(needle + j) == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
