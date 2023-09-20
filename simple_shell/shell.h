#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <sys/types.h>

void gad_prompt(void);
void g_print(const char *message);
void r_command(char *command, size_t size);
void exe_command(const char *command);


#endif
