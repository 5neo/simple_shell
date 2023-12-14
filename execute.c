#include "shell.h"

/**
 * execCommand - Function Executes a specified command entered by the user.
 *
 * @command: A pointer to the null-terminated string representing the command.
 *
 * Return: This function returns nothing.
 */
void execCommand(const char *command)
{
	pid_t child_pid = fork();

	if (strcmp(command, "exit") == 0)
	{
		exit(0);
	}
	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[100];
		int arg_count = 0;
		char *token = strtok((char *)command, " ");

		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;
		execve(args[0], args, NULL);

		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
