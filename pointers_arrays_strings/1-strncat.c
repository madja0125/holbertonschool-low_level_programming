#include "main.h"
/**
 *  *_strncat - concatenates two strings
 * @dest: destination
 * @src: source of string
 * @n: amount of bytes use for the string
 * Return: two strings
 */

char *_strncat(char *dest, char *src, int n)
{

	int len = 0, len2 = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}

	while (len2 < n)
	{
		(*(dest + len)) = (*(src + len2));
	if (*(src + len2) == '\0')
		break;
	len++;
	len2++;
	}
	return (dest);
}

