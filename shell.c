#include "shell.h"

/*
 * main - Start point of the simple shell program.
 *        Continuously prompts the user when writing commands,
 *        reads and executes them until manually terminated.
 *
 * Return: Always returns 0 to indicate successful execution.
 *
 */
 
int main(void) {
    char command[100];

    while (true) {
        display_prompt();
        readCommand(command, sizeof(command));
        execCommand(command);
    }
	
    return 0;
}
