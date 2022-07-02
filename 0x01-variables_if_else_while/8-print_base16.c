#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char a = 0;
	char b;

	while (a < 16)
	{
		if (a < 10)
		{
			putchar(a);
		}
		else
		{
			for (b = 'a'; b <= 'f'; b++)
			{
				putchar(b);
			}
		}
	}

	putchar('\n');

	return (0);
}
