#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers and initializes elements to 0.
 * @w: Width of the grid (number of columns).
 * @h: Height of the grid (number of rows).
 *
 * Return: Pointer to the allocated grid or NULL on failure.
 */
int **alloc_grid(int w, int h)
{
int **matrice;
int i;
int j;
if (w <= 0 || h <= 0)
{
return (NULL);
}
matrice = (int **)malloc(h * sizeof(int *));
if (matrice == NULL)
{
return (NULL);
}
for (i = 0; i < h; i++)
{
matrice[i] = (int *)malloc(w * sizeof(int));
if (matrice[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(matrice[j]);
}
free(matrice);
return (NULL);
}
for (j = 0; j < w; j++)
{
matrice[i][j] = 0;
}
}
return (matrice);
}
