#include <stdio.h>
#include "lists.h"

void test(void) __attribute__((constructor));
/**
 * test - the funs with constructor
 *
 * Description: print strings
 * Return: na
 */
void test(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
