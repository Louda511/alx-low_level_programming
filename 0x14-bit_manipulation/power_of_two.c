#include "main.h"

unsigned int power_of_two(int power)
{
	int res=1, i;

	for(i = 0; i < power; i++)
	{
		res *= 2;
	}

	return res;
}
