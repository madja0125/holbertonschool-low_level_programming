#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 * Return: no return.
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
