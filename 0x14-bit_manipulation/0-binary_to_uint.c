#include "main.h"

/**
 * binary_to_uint - A binary number is converted to an unsigned int
 * @b: the binary number content
 *
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y  = 0;

	if (!b)
	{
		return (0);
	}
	else
	{
		for (x = 0; b[x]; x++)
		{
			if (b[x] < '0' || b[x] > '1')
			{
				return (0);
			}
			else
			{
				y  = 2 * +(b[x] - '0');
			}
		}
	}

	return (y);
}

