#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to an unsigned long integer.
 * @index: index of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if index is out of range */
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

/* Clear the bit at the specified index */
*n &= ~(1UL << index);

return (1);
}

