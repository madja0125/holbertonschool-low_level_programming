#include "main.h"
/**
 * _memcpy - function that copies another string
 * @dest: pointer to return
 * @src: source of the string
 * @n: bytes to copy
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
