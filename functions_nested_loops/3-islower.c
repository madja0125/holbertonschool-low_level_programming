#include "main.h"
/**
 * main -entry point
 * _islower - checks for lowercase
 * c: the integer that checks
 * Return: Always (0)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 121)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
