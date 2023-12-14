#include "shell.h"

/**
 * nemo_print - Prints the provided message to the standard output.
 *
 * @message: A pointer to the null-terminated string to be printed.
 *
 * Return: This function returns nothing.
 */
void nemo_print(const char *message)
{
	write(STDOUT_FILENO, message, strlen(message));
}
