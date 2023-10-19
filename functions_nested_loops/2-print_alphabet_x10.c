#include "main.h"
/**
 * main - entry point of the code
 * 2-print_alphabet_x10 - prints alphabet 10 time
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
	int i, j;

	j = 0;

	while (j <= 9)
	{
	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');
	j++;
	}

}
