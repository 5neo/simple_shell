#include "shell.h"

/**
 * readCommand - Reads a command from the user.
 *
 * @input: A buffer to store the user's input command.
 * @bufsize: The size of the buffer.
 *
 * Return: None (void).
 */

void readCommand(char *input, size_t bufsize) {
	
    int charsRead = getline(&input, &bufsize, stdin);

    if (charsRead == -1) {	
        perror("getline");
        exit(EXIT_FAILURE);
    }

    if (input[charsRead - 1] == '\n') {
        input[charsRead - 1] = '\0';
    }
}
