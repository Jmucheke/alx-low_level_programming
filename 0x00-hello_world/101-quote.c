#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - printing to standard error
 *
 * Return: Always 1 (per instructions)
 */

int main(void)
{
	const char *msg = "and that piece of art is useful\"";
       	const char *msg1 = " - Dora Korpar, 2015-10-19\n";
	char buffer[59];
	
	strcpy(buffer, msg);
	strcat(buffer, msg1);

	write(STDERR_FILENO, buffer, strlen(buffer));
	return (1);
}
