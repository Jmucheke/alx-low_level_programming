#include <stdio.h>
#include <unistd.h>

/**
 * main - printing to standard error
 *
 * Description: Prints a message to stderr
 *
 * Return: Always 1 (per instructions)
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg, 59);
	return (1);
}
