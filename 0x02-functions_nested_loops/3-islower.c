#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c: is the char to check
 * Return: 1 if char is lowercase, otherwise return  0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
