#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **argv)
{
	int i;

	printf("argv content is argv[]\n");

	while (*argv != NULL)

	{
		printf("argv = %s\n", argv[i]);
		argv++;
	}

	return (0);
}
