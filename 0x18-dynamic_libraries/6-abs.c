#include "main.h"

/**
 * _abs -...
 * @n:...
 * Return:...
 */
int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
