#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: the string to be printed between numbers
 * @n: the number of intergers passed to the function
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (!seperator)
			printf("%d", va_arg(num, int));
		else if (seperator && i == 0)
			printf("%d", va_arg(num, int));
		else
			printf("%s%d", seperator, va_arg(num, int));
	}
	va_end(num);
	printf("\n");
}
