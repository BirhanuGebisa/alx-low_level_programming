#include "main.h"
/**
 * _strlen - return the length 
 * pointers char
 * Return: The length of string
 */
void _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
