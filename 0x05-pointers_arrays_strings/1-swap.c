#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void swap_int( int *a, int *b)
{
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
