#include "variadic_functions.h"

/**
 * print_all - print all the arguments passed to the function
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 *
 */

void print_all(const char * const format, ...)
{
	char c;
	int i = 0;
        char*	separator = ", ";
	if(format !=NULL)
	{	
		va_list args;
		va_start(args, format);

		while(format[i])
		{	
			if (!format[i+1])
				separator = "\n";
			c = format[i];
			
			switch (c)
			{
				case 's':
                                         printf("%s%s",va_arg(args, char*), separator);
                                        break;
				case 'i':
					 printf("%d%s", va_arg(args, int), separator);
                                        break;
				case 'f':
                                         printf("%f%s", va_arg(args, double), separator);
                                        break;
				case 'c':
                                        printf("%c%s", va_arg(args, int), separator);
                        		break;
				default:
					break;
			}
			i++;
		}
		
	}
	
}
