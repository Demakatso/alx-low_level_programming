#include "main.h"

/**
 * _memcpy - function copies memory area.
 *
 * @dest: pointer to memory area that is copied to.
 * @src: pointer to memory area that is copied from.
 * @n: number of bytes in memory to be copied
 *
 * Return: pointer to memor area dest of type char *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];
	}

	return (dest);
}
