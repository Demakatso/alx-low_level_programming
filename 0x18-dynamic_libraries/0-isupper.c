#include "main.h"

/**
 * _isupper - function checks for upper case character
 * @c: parameter detailing character to be checked
 *
 * Return: integer for success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
