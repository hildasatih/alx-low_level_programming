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
	unsigned int de_num = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		de_num = 2 * de_num + (b[x] - '0');
	}

	return (de_num);
}
