#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}

int main(int argc, char *argv[])
{
	if (argc != 3) 
	{
        printf("Error\n");
	return 98;	
	}

	char *num1_str = argv[1];
	for (int i = 0; num1_str[i] != '\0'; i++) 
	{
        if (!isdigit(num1_str[i])) {
		printf("Error\n");
		return 98;
        }
    }
    int num1 = atoi(num1_str);

    char *num2_str = argv[2];
    for (int i = 0; num2_str[i] != '\0'; i++) {
        if (!isdigit(num2_str[i])) {
            printf("Error\n");
            return 98;
        }
    }
    int num2 = atoi(num2_str);

    int result = multiply_numbers(num1, num2);
    printf("%d\n", result);

    return 0;
}

