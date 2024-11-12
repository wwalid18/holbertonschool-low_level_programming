#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously allocated by alloc_grid.
 * @matrice: The 2D grid to be freed.
 * @h: The height of the grid (number of rows).
 *
 * Return: Nothing.
 */
void free_grid(int **matrice, int h)
{
int i;
for (i = 0; i < h; i++)
{
free(matrice[i]);
}
free(matrice);
}
