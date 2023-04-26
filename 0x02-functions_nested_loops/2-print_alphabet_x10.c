#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;/* define i for loops */
	char j = 'a';/* enter j for alphaets */
		while (i < 10)
		{
			j = 'a';
			while (j <= 'z')
			{
			_putchar(j);/* printing all alphabets */
			j++;
			}
		_putchar('\n');
		i++;
		}
}
