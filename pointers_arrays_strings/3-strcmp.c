#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: variable
 * @s2: variable
 * Return: 0 alway
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	return (s1[a] - s2[a]);
}
