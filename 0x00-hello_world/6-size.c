#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int a = 10;
	char b = 'a';
	float c= 2.3;
	long int d = 2380567;
	long long int e = 2000000000;


	printf("Size of a char: %d byte(s)\n", sizeof(b));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d byte(s)\n", sizeof(d));
	printf("Size of a long long int: %d byte(s)\n", sizeof(e));
	printf("Size of a float: %d byte(s)\n", sizeof(c));

    	return (0);
}
