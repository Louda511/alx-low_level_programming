#include "calc.h"

/**
 * get_op_func - returns a pointer to operation
 * @s: character representing the desired operation
 *
 * Return: function pointer to the desired operation
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
	int i;

	i=0;

	while (i < 5)
	{
		if (*s == *(ops[i].op) && s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
