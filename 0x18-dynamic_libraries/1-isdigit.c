#include "main.h"

/**
 * _isdigit - function checks for a digit between 0 to 9
 * @c: parameter detailing digit to be checked for.
 *
 * Return: integer for success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
