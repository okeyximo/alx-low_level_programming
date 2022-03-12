#include <stdio.h>

/**
 * main - returns a combination of two digits
 *
 * Return: 0 (Succcess)
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || (i == '8' && j != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

