#include <stdio.h>

/**
 * print_table - Affiche une table de multiplication
 * @size: La taille de la table (ex: 4 pour une table 4x4)
 */
void print_table(int size)
{
    int row, col;

    for (row = 1; row <= size; row++)
    {
        for (col = 1; col <= size; col++)
        {
            printf("%d ", row * col);
            /* Suppression du col++; qui était ici */
        }
        printf("\n");
    }
}

/* -- NE PAS MODIFIER le code ci-dessous -- */
int main(void)
{
    print_table(4);
    return 0;
}
