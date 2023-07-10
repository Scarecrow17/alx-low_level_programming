#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create two dimensional array of ints
 * @width: array width
 * @height: array height
 * Return: pointer to matrix (Success), NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **arr, p, q;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (p = 0; p < height; p++)
	{
		arr[p] = (int *)malloc(sizeof(int) * width);
		if (arr[p] == NULL)
		{
			for (p--; p >= 0; p--)
				free(arr[p]);
			free(arr);
			return (NULL);
		}
	}

	for (p = 0; p < height; p++)
		for (q = 0; q < width; q++)
			arr[p][q] = 0;

	return (arr);
}
