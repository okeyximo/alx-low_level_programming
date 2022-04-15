#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform by the user
 * @s: the operator passed as argument to the program
 * Return: NULL or the expected operators
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
    int i = 0;

	while (ops[i].op)
	{
		if (strcpy(ops[i].op, s) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
