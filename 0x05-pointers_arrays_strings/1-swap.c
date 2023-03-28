#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps 2 intergers
 * int a - to be swapped
 * int b - to be swapped
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
