#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 *             one number to another
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that differ between n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int bit_diff = n ^ m; /* XOR to get the bit differences */
unsigned int count = 0;

/* count the number of set bits in bit_diff */
while (bit_diff != 0)
{
count++;
bit_diff &= bit_diff - 1; /* clear the least significant set bit */
}

return (count);
}
