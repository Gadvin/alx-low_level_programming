#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
	char str[] = "this is a separted word by snord by space";
	char *stc = malloc(sizeof (char) * strlen(str));
	char delim[5] = " ";
	char *trunks;
	int i;

	strcpy(stc, str);
	trunks = strtok(stc, delim);
	/*printf("%p\n %p\n", str, trunks);*/


	while (trunks != NULL)
	{
		printf("%s\n", trunks);
		trunks = strtok(NULL, delim);
	}
	
	for (i = 0; i < 45; i++)
	{
		if (stc[i] == '\0')
			printf("\\0");
		else
			printf("%c", stc[i]);
	}
	printf("\n");
	return (0);

}
