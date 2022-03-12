#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from zero
 *
 * Return - 0 (success)
 */
int main(void)
{
	int n = 0;
	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return(0);
}

