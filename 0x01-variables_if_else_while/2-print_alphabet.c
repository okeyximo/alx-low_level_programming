#include <stdio.h>

/**
 * main - uses putchar to print all lowercase alphabet
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
