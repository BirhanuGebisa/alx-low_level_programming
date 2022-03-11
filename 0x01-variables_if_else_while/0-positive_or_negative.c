#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main - block
 * Get a random number and print the number
 * and if postive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n=rand() - RAND_MAX /2;
	if(n > 0)
		printf("%d is Postive\n", n);
	else if(n<0)
		printf("%d is Negative\n", n);
	else
		printf("%d is Zero\n", n);
	return (0);
}
