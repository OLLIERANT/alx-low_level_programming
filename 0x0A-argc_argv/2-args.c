#include "main.h"
#include <stdio.h>

/**
 * main - program prints all arguments it receives
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	return (0);
}
