#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - function concatenates two strings
 *
 * @dest: this is the pointer to the destination string
 * @src: pointer to the source string
 * @n: the number of bytes from the source string src to be concatenated
 *
 * Return: Pointer to the resulting destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int m, size = 0, i = 0;

	m = strlen(dest);
	while (src[size])
	{
		size++;
	}

	while (i < n && i <= size)
	{
		dest[m + i] = src[i];
		i++;
	}

	dest[m + i] = '\0';

	return (dest);
}
