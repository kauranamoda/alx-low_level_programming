#include <stdio.h>
/**
* main - Prints 50 Fibonnaci numbers
* Return: 0
*/
int main(void)
{
	int count;

	unsigned long fibi1 = 0, fibi2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibi1 + fibi2;
		printf("%lu", sum);

		fibi1 = fibi2
		fibi2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
}
