#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat -...
 * @dest:...
 * @src:...
 * @n:...
 * Return:...
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
