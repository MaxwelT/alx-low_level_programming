#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: integer to swap
 * @b: integer to swap
 * int c: addressed the swapped value will be sent to
 * Return: Always 0(success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
