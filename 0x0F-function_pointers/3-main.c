#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main (int argc, char *argv[])
{	
	int (*f) (int, int);
	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	
	if (get_op_func(argv[2]) == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}

	if (*(argv[2]) == '/' && atoi(argv[3]) == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	f = get_op_func(argv[2]);

	printf("%d\n", f(atoi(argv[1]),atoi(argv[3])));

	return(0);
}
