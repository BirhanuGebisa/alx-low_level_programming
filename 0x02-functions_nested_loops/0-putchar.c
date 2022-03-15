#include <stdio.h>
/* 
 * main - Entry point
 *write program print char in new line
 *Return: Always (Success)
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
return (0);
}
