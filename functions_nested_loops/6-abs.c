#include "main.h"

/**
 * _abs - Computes the absolute value
 * of an integer.
 *
 * @i: input number as an integer.
 *
 * Return: absolute value
 */
int _abs(int s)
{
	if (s >= 0)
	{
		return (s);
	}
	else
	{
		return (s * -1);
	}
}
