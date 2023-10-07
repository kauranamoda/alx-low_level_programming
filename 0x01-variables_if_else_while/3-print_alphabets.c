#include <stdio.h>
/**
* main - Doing all the work
*
* Return: 0 (success)
*/
int main(void)
{
	char lettrs[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 52; i++)

	{
		putchar(lettrs[i]);
	}
	putchar('\n');
	return (0);
}
