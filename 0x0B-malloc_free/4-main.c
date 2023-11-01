#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height);

int main()
{
    int height = 3;
    int width = 4;
    int i;  /* Declare i here */
    int j;  /* Declare j here */

    /* Allocate a 2D grid */
    int **grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            fprintf(stderr, "Memory allocation failed for row %d.\n", i);
            free_grid(grid, i);  /* Free previously allocated memory before exiting */
            return 1;
        }
    }

    /* Initialize the grid with some values */
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            grid[i][j] = i * width + j;
        }
    }

    /* Free the allocated memory using the free_grid function */
    free_grid(grid, height);

    return 0;
}

