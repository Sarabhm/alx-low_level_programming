#include "function_pointers.h"

/**
 * print_name - function tnat prints a name
 * @name: name to print
 * @f: function to print 
 * Return: always
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
