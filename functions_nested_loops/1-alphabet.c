#include "main.h"
/**
 * main - entry point
 * void print_alphabet(void) - is the prototype
 * Return: Always (0)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
