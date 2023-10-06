#include <stdio.h>
/**
 * main - Doing all the work
 *
 * Return: 0 (success)
 */
int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
	putchar(letters[i]);
	}
	putchar('\n');

	return (0);
}
