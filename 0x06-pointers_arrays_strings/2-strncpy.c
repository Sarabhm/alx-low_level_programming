#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: copy
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0' && a < n)
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		*(dest + b) = *(src + b);
	}
	while (a < n)
	{
		*(dest + a) = '\0';
		a++;
	}
	return (dest);
}
