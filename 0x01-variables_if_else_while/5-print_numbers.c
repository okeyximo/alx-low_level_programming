#include <stdio.h>

/**
 * main - Prints all single base ten numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
