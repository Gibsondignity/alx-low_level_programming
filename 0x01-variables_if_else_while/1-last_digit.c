#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	char words = "Last digit of";
	char last_words = "and is less than 6 and not 0"

	if (lastDigit > 5)
	{
		printf("%d %d is %d and is greater than 5\n", words, n, lastDigit);
	}
	if (lastDigit == 0)
	{
		printf("%d %d is %d and is 0\n", words, n, lastDigit);
	}
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("%d %d is %d %d\n", words, n, lastDigit, last_words);
	}



	/* your code goes there */
	return (0);
}
