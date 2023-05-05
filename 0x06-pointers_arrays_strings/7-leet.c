#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: string to be encoded
 * Return: string s
 */
char *leet(char *s)
{
	int i, j;

	char *let = "aAeEoOtTlL";
	char *num = "4433007711";

	i = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 10; j++)
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
