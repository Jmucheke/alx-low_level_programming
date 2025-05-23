#include <stdio.h>

/**
 * main - Using size of to get size of data types
 *
 * printf: size of various types
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;
	long int ix;
	long long int ixx;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(ix));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ixx));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
