#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of argument typed
 * @argv: array pointing to arguments
 * Return 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}

