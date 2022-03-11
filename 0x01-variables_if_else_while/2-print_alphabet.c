#include <stdio.h>
#include <stdlib.h>
/**
 * Main - entry point
 * Description: Display alphabet
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
