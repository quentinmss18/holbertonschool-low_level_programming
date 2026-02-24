#include <stdio.h>

int sum_to_n(int n)
{
    int i;
    int sum = 0;

    /* ÉTAPE A : On change i < n en i <= n pour inclure le nombre n */
    for (i = 1; i <= n; i++)
        sum += i;

    /* ÉTAPE B : On retourne 'sum' (le résultat) et non 'n' */
    return sum;
}

/* -- NE PAS MODIFIER le code ci-dessous -- */
int main(void)
{
    printf("%d\n", sum_to_n(10));
    return 0;
}
