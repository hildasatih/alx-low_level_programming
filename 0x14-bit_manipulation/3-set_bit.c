#include "main.h"

/**
 * set_bit - at a given index set a bit to 1
 * @n: a pointer to the changed number
 * @index: index of the bit to that needs to be set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

