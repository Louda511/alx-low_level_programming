#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints user name
 * @name: name of the user
 * @f: the printing function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);

}
