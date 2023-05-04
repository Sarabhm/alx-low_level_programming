#include "main.h"
/**
 * _strcat -  function that concatenates two strings
 * @dest: string to append
 * @src: string added
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = 0;
	len2 = 0;
	i = 0;

	while (*(dest + len1) != '\0')
	{
	len1++;
	}
	while (*(src + len2) != '\0')
	{
	len2++;
	}
	for (i = 0; i < len2; i++)
	{
		*(dest + len1 + i) = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
