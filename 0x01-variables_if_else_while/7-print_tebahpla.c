#include <stdio.h>

/**
 * main - prints letters of the alphabet in reverse
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}

