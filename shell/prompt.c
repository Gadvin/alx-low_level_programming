#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	size_t n = 0;
	char *buf = NULL;

	buf = malloc (sizeof (char) * 10);
	printf("root@0e19f0e70719$ ");
	getline (&buf, &n, stdin);
	printf("%s", buf);

	free(buf);
	return(0);
}
