#include <stdlib.h>
#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the bit.
 * @index: the index to get the value at - indices start at 0.
 * Return: -1 if an error occurs
 * Otherwise the value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	mask = mask << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
