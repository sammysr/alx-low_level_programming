#include "main.h"
/**
 * print_alphabet - wirte the the lower-case alphabet on a line.
 * main - check the code
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
