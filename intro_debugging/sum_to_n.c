#include <stdio.h>

int sum_to_n(int n)
{
    int i;
    int sum = 0;

    /* Correction 1 : Utiliser <= pour inclure le nombre n dans le calcul */
    for (i = 1; i <= n; i++)
        sum += i;

    /* Correction 2 : Retourner la variable 'sum' (le résultat) et non 'n' */
    return sum;
}

/* -- DO NOT Modify the code below this line -- */
int main(void)
{
    printf("%d\n", sum_to_n(10));
    return 0;
}
