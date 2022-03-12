#include <stdio.h>

/**
 * main - uses putchar to print all lowercase and upper case alphabet
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c, u;

	for (c = 'a' ; c <= 'z'; c++)
		putchar(c);
	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
