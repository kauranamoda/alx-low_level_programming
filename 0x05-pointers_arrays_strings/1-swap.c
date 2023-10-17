#include "main.h"
/**
* swap_int - The brain that swaps the value of int a and int b
* @a: first int
* @b: second int
* Return: 0 (Success)
*/
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
