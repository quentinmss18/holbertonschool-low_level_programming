#include <unistd.h>

/**
 * _putchar - écrit le caractère c sur la sortie standard
 * @c: le caractère à écrire
 *
 * Return: 1 si succès
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
