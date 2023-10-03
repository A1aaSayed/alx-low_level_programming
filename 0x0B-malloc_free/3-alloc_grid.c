#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int *)malloc(sizeof(int) * height);

}
