#include "holberton.h"
/**
 * main - Entry point
 * Description: prints 'putchar.c \n'
 * Return: Always 0 (success)
 */
int main(void)
{
char str[] = "putchar.c\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
