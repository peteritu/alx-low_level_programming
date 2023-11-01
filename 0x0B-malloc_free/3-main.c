#include "main.h" /* Include the header file with function prototypes */
#include <stdio.h>

int main(void)
{
    int **grid;
    int i, j;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return 1;
    }

    /* Printing the grid */
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    grid[0][3] = 98;
    grid[3][4] = 402;

    printf("\n");

    /* Printing the grid after modifications */
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}

