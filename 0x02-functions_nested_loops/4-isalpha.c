#include "main.h"

/**
 * _isalpha - checks is a character is alphabetic.
 * @c: takes value
 *
 * Return: 1 if c is a letter or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
