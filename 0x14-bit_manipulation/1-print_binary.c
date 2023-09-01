#include "main.h"

/**
 * print_binary - this prints binary equivalent to a decimal number
 * @n: rep binary number to be printed
 */
void print_binary(unsigned long int n)
{
	int x, count_No = 0;
	unsigned long int current_No;

	for (x = 67; x >= 0; x--)
	{
		current_No = n >> x;

		if (current_No & 1)
		{
			_putchar('1');
			count_No++;
		}
		else if (count_No)
			_putchar('0');
	}
	if (!count_No)
		_putchar('0');
}
