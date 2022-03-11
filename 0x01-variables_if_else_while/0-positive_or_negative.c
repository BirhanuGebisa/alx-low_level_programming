#include <stdlib.h>

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
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is Postive", n);
	else if (n < 0)
	printf("%d is Negative", n);
	else
	printf("%d is Zero", n);
	return (0);
}
