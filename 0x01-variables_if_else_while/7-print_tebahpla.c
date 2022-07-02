#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(strrev(al));
	}

	putchar('\n');

	return (0);
}
