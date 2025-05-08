#include <stdio.h>
#include <unistd.h>

/**
 * main - printing to standard error
 *
 * Return: 1 (error)
 */

int main()
{
	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
