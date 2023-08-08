#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **pta;
	int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	pta = malloc(height * sizeof(int *));
	if (pta == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
	pta[i] = malloc(width * sizeof(int));

		if (pta[i] == NULL)
		{
			for (i; i >= 0; i--)
				free(pta[i]);

			free(pta);
			return (NULL);
		}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			pta[i][j] = 0;
	}
	return (pta);
}
