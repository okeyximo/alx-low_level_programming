#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 *
 * @n: integer to get last digit from
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;/* gets the last digit*/

	if (l < 0)
		l *= -1;/*checks if last digit is negative*/
	_putchar(l + '0');/*converts it to a character*/
	return (l);
}
