#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return 0;
for (int i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0' || b[i] == '1')
{
result = result << 1;
result += b[i] - '0';
}
else
{
return 0;
}
}
return result;
}
