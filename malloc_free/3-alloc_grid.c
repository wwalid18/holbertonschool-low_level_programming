#include <stdlib.h>
#include <cstddef>

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
if (w <= 0 || h <= 0)
return (NULL);
matrice = malloc(h * sizeof(int *));
if (matrice == NULL)
return (NULL);
for (i = 0; i < h; i++)
{
matrice[i] = calloc(w, sizeof(int));
if (matrice[i] == NULL)
{
while (i >= 0)
{
free(matrice[i]);
i--;
}
free(matrice);
return (NULL);
}
}
return (matrice);
}
