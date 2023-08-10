#include "main.h"
/**
 **malloc_checked - allocates memory using malloc
 *@b: number of bytes allocated
 *Return: return a pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
