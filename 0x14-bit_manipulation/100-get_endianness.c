#include "main.h"
/**
 * get_endianness - checks the endianness of the computer
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
int num = 1;
char *endian_ptr = (char *)&num;

/* If the first byte of the integer is 1, the computer is little-endian.
 *  Otherwise, it is big-endian.
 */
    return (*endian_ptr == 1);
}

