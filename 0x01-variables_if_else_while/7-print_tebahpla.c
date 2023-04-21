#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char CHAR;

	for (CHAR = 'z'; CHAR >= 'a'; CHAR--)
	{
		putchar(CHAR);
	}
	putchar('\n');
	return (0);
}
