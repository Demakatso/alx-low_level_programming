/**
 * get_bit - returns the value of a bit at a given index.
 * @n: an unsigned long int to check bits of.
 * @index: the index, starting from 0, of the bit to retrieve.
 *
 * Return: the value of the bit at index index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;

if (index >= (sizeof(unsigned long int) * 8))
{
return (-1); /* Index out of range */
}

mask = 1UL << index;
return ((n & mask) != 0);
}
