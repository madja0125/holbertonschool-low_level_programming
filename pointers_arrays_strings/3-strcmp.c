#include "main.h"
/**
 * strncmp - a function that compares two strings
 * @s1: input one
 * @s2: input two
 * Return: 0  Always
 */

int _strcmp(char *s1, char *s2)
{
	int i, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) =='\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
