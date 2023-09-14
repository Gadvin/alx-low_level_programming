#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	size_t n = 10;
	char *buf;

	buf = malloc (sizeof (char) * 10);
	printf("$");
	getline (&buf, &n, stdin);
	printf("Your name is : %s", buf);
	printf(" Buffer size: %ld\n", n);

	free(buf);
	return(0);
}
