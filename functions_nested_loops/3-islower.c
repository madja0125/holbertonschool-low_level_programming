#include "main.h"
/**
 * _islower - point of entry
 * @c: the variable
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
