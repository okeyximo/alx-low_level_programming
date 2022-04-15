#include "3-calc.h"

/**
 * op_add - sum of a and b
 * @a: first number
 * @b: second number
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


