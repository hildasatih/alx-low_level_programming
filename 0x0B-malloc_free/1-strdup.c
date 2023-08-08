#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aptr;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
			i++;

		aptr = malloc(i * sizeof(char)  + 1);

		if (aptr == NULL)
			return (NULL);

		for (j = 0; str[j]; j++)
		{
			aptr[j] = str[j];
		}
	}
	return (aptr);
}

