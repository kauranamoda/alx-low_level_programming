#include <stdio.h>

/**
 * main - The brain of the project
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letters[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)

	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
