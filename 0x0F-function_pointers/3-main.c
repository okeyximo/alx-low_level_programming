#include "3-calc.h"
/**
 * main - calculator
 * @argc: argument count
 * @argv: argument vector
 */

int main(int argc,char *argv[])
{
	int num1, num2;
	int (*func)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error/n");
		return (99);
	}
	printf("%d\n", func(num1, num2));

	return (0);

}
