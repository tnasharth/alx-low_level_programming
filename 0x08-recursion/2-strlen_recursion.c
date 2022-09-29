#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: poinnter to string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
