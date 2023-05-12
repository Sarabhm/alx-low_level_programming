#include "main.h"
/**
* _islower - check if character is lowercase
* @c: is the character to check
* Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)/*@c: is the letter to check if lowzer acter to check*/
{
	if (c >= 'a' && c <= 'z')/* c @c: is defined as char*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
