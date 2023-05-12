#include "main.h"
/**
 * _memcpy - function that copies a memory area
 * @dest: copy
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;

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
