#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: string to be encoded
 * Return: string s
 */
char *leet(char *s)
{
	int i, j;

	i = 0;

	char *let = "aAeEoOtTlL";
	char *num = "4433007711";

	while (*(s + i) != '\0')
	{
		for (j = 0; *(let + j) != '\0'; j++)
		{
			if (*(s + i) == *(let + j))
			{
				*(s + i) = *(num + j);
			}
		}
		i++;
	}
	return (s);
}
