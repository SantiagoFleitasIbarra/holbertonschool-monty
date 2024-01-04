#include "monty.h"

/**
 * _isdigit - check if a character is a digit
 * @c: character to check
 * Return: 1 if it is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}