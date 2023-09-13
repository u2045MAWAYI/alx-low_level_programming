#include "function_pointers.h"
#include <stdio.h> 
/**
 * print_name - that prints the name using pointer to function
 * @name: name to print
 * @f: function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
