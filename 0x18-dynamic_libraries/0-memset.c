#include "main.h"

/**
 * _memset - function fills memory with a constant byte.
 *
 * @s: pointer to memory area to be filled.
 * @b: constant byte
 * @n: number of bytes in memory to be filled
 *
 * Return: pointer to memor area s of type char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		s[i] = b;
	}

	return (s);
}
