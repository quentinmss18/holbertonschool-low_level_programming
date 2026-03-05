#include <stdio.h>

/**
 * main - Programme d'une calculatrice interactive simple
 *
 * Description: Effectue des additions, soustractions, multiplications
 * et divisions. Gère les erreurs de division par zéro et les choix
 * de menu invalides.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	int choice;
	double a, b, result;

	printf("Simple Calculator\n");

	do {
		/* Affichage du menu */
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		/* Lecture du choix de l'utilisateur */
		if (scanf("%d", &choice) != 1)
		{
			/* Sortie de secours si l'entrée n'est pas un nombre */
			break;
		}

		/* Traitement du choix */
		if (choice >= 1 && choice <= 4)
		{
			printf("A: ");
			scanf("%lf", &a);
			printf("B: ");
			scanf("%lf", &b);

			if (choice == 1)
			{
				result = a + b;
				printf("Result: %g\n", result);
			}
			else if (choice == 2)
			{
				result = a - b;
				printf("Result: %g\n", result);
			}
			else if (choice == 3)
			{
				result = a * b;
				printf("Result: %g\n", result);
			}
			else if (choice == 4)
			{
				if (b == 0)
					printf("Error: division by zero\n");
				else
				{
					result = a / b;
					printf("Result: %g\n", result);
				}
			}
		}
		else if (choice == 0)
		{
			printf("Bye!\n");
		}
		else
		{
			printf("Invalid choice\n");
		}

	} while (choice != 0);

	return (0);
}
