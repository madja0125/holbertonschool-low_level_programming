#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: variable
 * Return (0) Always
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 57)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
