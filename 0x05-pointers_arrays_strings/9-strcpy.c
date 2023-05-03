#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src including null
 * @dest: pointer to the buffer where we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int lgth, a;

	lgth = 0;

	while (*(src + lgth) != '\0')
	{
		len++;
	}

	for (a = 0; a < lgth; a++)
	{
		*(dest + a) = *(src + a);
	}
	*(dest + a) = '\0';

	return (dest);
}
