#include "main.c"
#include <time.h>
#include <stdlib.h>

char *rand_added_to_n(int n);
char random_ascii(void);

/*static int MIN_ASCII = 40; */
/*char *ASCII_OVERFLOW_ERR = "500";*/

int main(void)
{
	srand(time(0));
	printf("string that adds to n: %s\n", rand_added_to_n(2772));
	return (0);
}

char *rand_added_to_n(int n)
{
	char temp;
	char *p;
	char return_str[100];
	int i = 0, total = 0;

	while (total != n)
	{
		temp = random_ascii();
		if (temp == 0)
		{	
			continue;
		}
		/*
		if (total + MIN_ASCII > n)
			return(ASCII_OVERFLOW_ERR);
		*/
		if (total + temp > n)
			temp = n - total;
		total = total + temp;
		return_str[i++] = temp; 
	}
	/* return_str[i] = '\0'; */
	p = &return_str[0];
	return (p);	
}

char random_ascii(void)
{
	char rtrnCh = 0;
	int p1 = 0, p2 = 0, p3 = 0, setP3 = 0, setP2 = 0;

	setP3 = rand() % 2, setP2 = rand() % 2; /* set to 1 or 0 */
	p1 = rand() % 2; /* p1 ascii is only 1 or 0 */
	if (setP2)
	{
		p2 = rand() % 10; /* p2 ascii can be 0..9 */
	}
	if (setP3 && setP2) /* cant have p3 if no p2 */
	{
		p3 = rand() % 10;
	}
	if (p3 > 7)
		p3 = 10 - p3; /* p3 ascii can only be 0..7 */
	if (setP3 && setP2)
		rtrnCh = rtrnCh * 10 + p3 - '0';
	if (setP2)
		rtrnCh = rtrnCh * 10 + p2 - '0';
	rtrnCh = rtrnCh * 10 + p1 - '0';

	if ((rtrnCh >= '0' && rtrnCh <= '9') || 
		(rtrnCh >= 'a' && rtrnCh <= 'z') ||
		(rtrnCh >= 'A' && rtrnCh <= 'Z'))
	{
		printf("Decimal Representation of returned Ch:%d\n", rtrnCh);
		return (rtrnCh);
	}
	else
		return (0);

	return (rtrnCh);
}
