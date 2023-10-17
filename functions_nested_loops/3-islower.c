#include "main.h"
/**
 * main -entry point
 * islower - checks for lowercase
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
