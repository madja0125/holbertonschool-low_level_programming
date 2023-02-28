#include "main.h"
/**
 * _strlen - a function that returns the length of a string
	 * @s: character input
 * Return: `length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

