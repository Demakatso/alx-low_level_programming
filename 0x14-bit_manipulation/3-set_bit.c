#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: pointer to the number whose bit is to be set
 * @index: index of the bit to be set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1); /* index is out of range */

*n |= (1UL << index); /* set the bit at the given index */

return (1); /* success */
}

