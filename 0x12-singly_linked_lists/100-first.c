#include <stdio.h>
#include <stdlib.h>

/**
 * call - excutes before the main function 
 *
 * Return: nothing
 *
 */

void __attribute__((constructor)) call()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
