#include "main.h"

/**
 *_memset - Fills a block of memory with a specific value
 *@s: memory area to be filled
 *@b: constant byte
 *@n: bytes of the area
 *
 *Return: pointer to the changed memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
