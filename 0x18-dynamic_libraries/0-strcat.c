#include "main.h"
#include <string.h>

/**
 * _strcat -...
 * @dest:...
 * @src:...
 * Return:...
 */

char *_strcat(char *dest, char *src)
{
	int n, i = 0;

	n = strlen(dest);

	while (src[i])
	{
		dest[n + i] = src[i];
		i++;
	}

	dest[n + i] = '\0';

	return (dest);
}
