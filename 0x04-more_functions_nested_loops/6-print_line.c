#include "main.h"

/**
* print_line - the func responsible for printing lines
* @n: number of times the _ is printed
*
* Return: void
*/


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

