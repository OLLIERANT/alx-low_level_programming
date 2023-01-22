#include "main.h"
#include <stdlib.h>

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string to return its length
 *
 * Return: an integer that displays the lenth of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
