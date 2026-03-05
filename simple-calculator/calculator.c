#include <stdio.h>

/**
 * main - Programme de calculatrice avec boucle et validation de menu
 *
 * Return: Toujours 0
 */
int main(void)
{
	int choice;

	/* On peut mettre un message de bienvenue ici (Task 0) */
	printf("Simple Calculator\n");

	do {
		/* Affichage du menu */
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
		printf("Choice: ");

		/* Lecture du choix */
		if (scanf("%d", &choice) != 1)
		{
			/* * Si scanf échoue (ex: l'utilisateur tape une lettre), 
			 * on quitte la boucle pour éviter une boucle infinie.
			 */
			break;
		}

		/* Validation du choix */
		if (choice == 0)
		{
			printf("Bye!\n");
		}
		else if (choice >= 1 && choice <= 4)
		{
			/* Logique des calculs à venir dans les prochaines tâches */
		}
		else
		{
			/* Message spécifique demandé pour les mauvais numéros */
			printf("Invalid choice\n");
		}

	} while (choice != 0);

	return (0);
}
