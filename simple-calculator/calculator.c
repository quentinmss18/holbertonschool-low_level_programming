#include <stdio.h>

/**
 * main - Point d'entrée du programme de calculatrice
 * * Return: Toujours 0 (Succès)
 */
int main(void)
{
    int choice;

    printf("Simple Calculator\n");

    do {
        /* Affichage du menu conforme à l'exemple */
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");
        printf("Choice: ");

        /* Lecture du choix de l'utilisateur */
        if (scanf("%d", &choice) != 1)
        {
            /* * Note : En cas d'entrée non-numérique, scanf échoue.
             * Pour ce squelette, on se concentre sur le fonctionnement nominal.
             */
            break;
        }

        /* Traitement du choix */
        if (choice == 0)
        {
            printf("Bye!\n");
        }
        else if (choice >= 1 && choice <= 4)
        {
            /* Ici viendront les appels aux fonctions de calcul plus tard */
            printf("Option %d selected (Logic to be added)\n", choice);
        }
        else
        {
            printf("Invalid choice, please try again.\n");
        }

    } while (choice != 0);

    return (0);
}
