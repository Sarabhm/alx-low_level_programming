#include <stdio.h>
#include "main.h"
/**
 * main - program that multiplies two numbers.
 * @argc: arguments num
 * @argv: array arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
/**
 * _atoi - converts a string to an int
 * @s: string to convert
 * Return: int value of string
 */
int _atoi(char *s)
{
	int i = 1;
	int res = 0;

    if (*s == '-')
    {
        i = -1;
        s++;
    }

    while (*s)
    {
        res = res * 10 + (*s - '0');
        s++;
    }

    return (i * res);
}
