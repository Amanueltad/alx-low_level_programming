#include "main.h"

/**
 * strlen_recursion - Return the length of a string
 * @s: the string is to be measured
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
