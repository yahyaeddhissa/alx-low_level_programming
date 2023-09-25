#include "main.h"

/**
 *_memcpy - Copies memory area
 *@dest: memory are to copy to
 *@src: memory area to copy from
 *@n: number of bytes to copy
 *
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
