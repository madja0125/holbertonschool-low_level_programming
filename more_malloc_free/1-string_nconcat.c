#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - cancattantes two strings.
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strout;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	i = len1 + n;

	strout = malloc(i + 1);

	if (strout == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		if (j < len1)
			strout[j] = s1[j];
		else
			strout[j] = s2[j - len1];

	strout[i] = '\0';

	return (strout);
}
