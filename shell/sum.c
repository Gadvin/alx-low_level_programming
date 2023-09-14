#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **argv)
{
	int i, summation = 0;

	printf("argc or ac = %d\n", ac);
	printf("argv content is argv[]\n");

	for (i = 1; i < ac; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		summation += atoi (argv[i]);
		printf("The sum of the numbers so far is  %d\n", summation);
	}
	printf("The total sum of the numbers is %d\n", summation);
	return (0);
}
