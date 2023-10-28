#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int s, e, t;

	for (s = 0, e = n-1; s < e; s++, e--)
	{
		t = a[s];
		a[s] = a[e];
		a[e] = t;
	}
}


