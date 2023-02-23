#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @r: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int r)
{
	int a;

	a = r % 10;
	if (a < 0)
	{
		_putchar(-1 + 48);
			return (-1);
	}
	else
	{
		_putchar(1 + 48);
			return (1);
	}
}
