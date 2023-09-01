/**
 * get_bit - returns the bit value in a decimal number at an index
 * @n: number to be searched
 * @index: the bit index
 *
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}

