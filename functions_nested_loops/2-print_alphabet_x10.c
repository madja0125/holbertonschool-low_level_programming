#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 time
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
