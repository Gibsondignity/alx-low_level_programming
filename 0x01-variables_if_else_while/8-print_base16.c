#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char a = 48;
	char b = 'a';

	while (a < 58)
	{
		putchar(a);
		a++;
	}

	while (b <= 'f')
	{
		putchar(b);
		b++;
	}

	putchar('\n');

	return (0);
}
