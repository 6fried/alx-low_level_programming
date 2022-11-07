#include "main.h"
/**
* free_grid - func
* @grid: param
* @heeight: param
*/
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
