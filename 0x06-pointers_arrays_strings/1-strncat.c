#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: string to append
 * @src: string added
 * @n: max number of bytes to use
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0, i = 0;

	while (*(dest + len1) != '\0')
	{
		len1++;
	}
	while (i < n && *(src + len2) != '\0')
	{
		len2++;
	}
	for (i = 0; i < len2; i++)
	{
		*(dest + len1 + i) = *(src + i);
	}
	*(dest + len1 + i) = '\0';
	return (dest);
}

