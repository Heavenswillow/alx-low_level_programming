#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the string length.
 * @s: The string to measure.
 * Return: string length.
 */
int _strlen_recursion(char *s);
{
	int comit = 0;

	if (*s)
	{

		comit++;
		comit += _strlen_recursion(s + 1);
	}
		return (comit);
}
