#include <stdio.h>

void frist(void)_attribute_((constructor));

/**
 * frist - prints a sentence before the
 * main function is executed
 */

void frist(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

