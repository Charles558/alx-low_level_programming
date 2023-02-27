#include "main.h"

/**
 * puts2 - a funct to print every other number in a string
 *
 * @str: string params
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])

		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	
	_putchar('\n');
}
