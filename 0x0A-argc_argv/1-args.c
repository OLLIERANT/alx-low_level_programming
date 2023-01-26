#include "main.h"
#include <stdio.h>

/**
 * main - program prints the number of arguments passed to it,
 * followed by a new line.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	int c;
	(void)argv;

	for (c = 0; c <= argc; c++)
	{}
	printf("%d\n", c - 2);

	return (0);
}
