#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: array to reverse
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
