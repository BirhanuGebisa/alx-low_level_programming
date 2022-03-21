#include "main.h"
/**
 * swap_int - swap the values
 * Pointers
 * Return: Nothing
 */
void swap_int( int *a, int *b)
{
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
