#include <stdio.h>

int row_sum(int row, int cols)
{
    int c;
    int sum = 0;

    for (c = 1; c <= cols; c++)
        sum += row * c;

    return sum;
}

int total_sum(int rows, int cols)
{
    int r;
    int total = 0;
    /* La variable 'current' n'est pas nécessaire ici */

    for (r = 1; r <= rows; r++)
    {
        /* On ajoute directement le résultat de la ligne au total global */
        total += row_sum(r, cols);
    }

    return total;
}

/* -- NE PAS MODIFIER le code ci-dessous -- */
int main(void)
{
    printf("%d\n", total_sum(3, 3));
    return 0;
}
