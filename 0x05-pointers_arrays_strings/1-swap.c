#include "main.h"

/**
 * swap_int - func to swap the values of two ints given address
 *
 * @a: int parameter a
 * @b: int parameter b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;

}
