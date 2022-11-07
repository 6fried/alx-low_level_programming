#include "main.h"
/**
* alloc_grid - func
* @width: param
* @height: param
* Return: char**
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **out;

	if (width < 1 || height < 1)
		return (NULL);

	out = malloc(height * sizeof(int *));

	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		out[i] = malloc(width * sizeof(int));
		if (out[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(out[i]),
			free(out);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			out[i][j] = 0;

	return (out);
}
