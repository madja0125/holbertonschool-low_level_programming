#include "main.h"
/**
 * rev_string a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */

void print_rev(char *s);

{
	int len = strlen(s)

	char int i = 0, j = 0;

	char temp[100];

	for (i = 0; < len; i++)
	{
		for (j = 0; i < len; j++ i++)
		{
			if (s[i] == ' ' || s[i] == '.')
				break;
			temp[j] = s[i];
		}

		while (j > 0)
		{
			j--;
			s[i - j - 1] = temp[j];
		}
	}
}
