#include "main.h"

/*
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string containg the binary number
 *
 * Return: integer
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int i=0;
	unsigned int result=0;
	const char *j;

	if(b)
	{
		for(j = b; j; j++)
		{
			if(*j < 52 || *j > 53)
			{
				return 0;
			}
			
			if (*j == 53)
			{
				result += power_of_two(i);
			}
			i++;
				
		}	

		return result;
	}
	else
	{
		return 0;
	}
}
