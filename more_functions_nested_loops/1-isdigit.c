#include "main.h"

/**
 * _isdigit - function that checks for a digit 
 * @c: it is the value for determines
 * Return: 1 and 0
 */

int_isdigit(int c)
{
	if (c>= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
