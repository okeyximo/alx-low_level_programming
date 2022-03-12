#include <stdio.h>

/**
 * main - Prints all possible combination of single-digit numbers.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;

	}
	putchar('\n');

	return (0);
}
