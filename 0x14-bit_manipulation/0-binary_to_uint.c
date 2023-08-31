#include "main.h"

/*
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string containg the binary number
 *
 * Return: integer
 *
 */

/*
 * power_of_two - calculates the power of two
 * @power: power index
 *
 * Return result
 */

unsigned int str_len(const char *s)
{
	unsigned int len = 0;

	for ( ; *s; s++)
	{
		len++;
	}
	return len;
}

unsigned int power_of_two(int power)
{
        int res = 1, i;

        for(i = 0; i < power; i++)
        {
                res *= 2;
        }

        return res;
}

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0, len;
	const char *j;

	if(b)
	{
		len = str_len(b); 
		for(j = b; *j; j++)
		{
			if(*j != '0' && *j !=  '1')
			{
				return 0;
			}
			
			if (*j == '1')
			{
				result += power_of_two(len - i - 1);
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
