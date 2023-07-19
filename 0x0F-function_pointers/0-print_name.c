#include "function_pointers.h"
/**
 * print_name - funtion pointer to print name
 * @name: name to output
 * @f: pointer to function print_name
 * return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
