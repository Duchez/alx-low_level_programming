#include "holberton.h"
/**
 * get_bit - gets the bit at the specified index
 * @n: number to be indexed
 * @index: the bit to get
 * @Return: the bit state or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
        if (index >= sizeof(n) * 8)
                return (-1);
        return (n >> index & 1);
}
