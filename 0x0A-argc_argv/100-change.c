#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min num of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int n = 0;
	int count = 0;


	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	n = atoi(argv[1]);

	while (n > 0)
	{
		if (n >= 25)
		{
			n -= 25;
		}
		else if (n >= 10)
		{
			n -= 10;
		}
		else if (n >= 5)
		{
			n -= 5;
		}
		else if (n >= 2)
		{
			n -= 2;
		}
		else if (n >= 1)
		{
			n -= 1;
		}
		count++;
	}
	printf("%d\n", count);
	return (0);
}
