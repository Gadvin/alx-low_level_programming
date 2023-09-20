#include "shell.h"
/**
 * main - main function for this program
 *
 * Return: 0 when successful
 */

int main(void)
{
	char command[120];

	while (true)
	{
		gad_prompt();
		r_command(command, sizeof(command));
		exe_command(command);
	}

	return (0);
}
