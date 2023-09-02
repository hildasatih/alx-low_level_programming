#include "main.h"

/**
 * flip_bits - counts the bits number to change
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: bits number to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int current_No;
	unsigned long int exclusive_No = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current_No = exclusive_No >> x;
		if (current_No & 1)
			count++;
	}

	return (count);
}

