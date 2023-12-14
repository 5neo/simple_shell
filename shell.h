#ifndef SHELL_H
#define SHELL_H
/*
 * Header file for a simple shell program.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>


void display_prompt(void);
void nemo_print(const char *message);
void readCommand(char *command, size_t size);
void execCommand(const char *command);




#endif
