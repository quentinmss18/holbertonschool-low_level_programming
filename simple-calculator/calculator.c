#include <stdio.h>

/**
 * main - Programme de calculatrice avec addition
 *
 * Return: Toujours 0
 */
int main(void)
{
    int choice;
    double a, b, result; /* Variables pour les calculs */

    do {
        printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\nChoice: ");
        
        if (scanf("%d", &choice) != 1)
            break;

        if (choice == 1)
        {
            /* Demande des opérandes */
            printf("A: ");
            scanf("%lf", &a);
            printf("B: ");
            scanf("%lf", &b);

            /* Calcul et affichage */
            result = a + b;
            
            /* %g est pratique : il affiche 35 au lieu de 35.000000 */
            printf("Result: %g\n", result);
        }
        else if (choice == 0)
        {
            printf("Bye!\n");
        }
        /* ... autres conditions (Subtract, Multiply, Divide) ... */
        else if (choice < 0 || choice > 4)
        {
            printf("Invalid choice\n");
        }

    } while (choice != 0);

    return (0);
}
