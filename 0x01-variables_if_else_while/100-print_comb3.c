#include <stdio.h>
/**
 * main - prints two digit numbers
 *
 * Returns: Always 0.
 */
int main(void)
{
	int num, num1;

	for (num = 0; num1 < 9; num++)
	{
		for (num1 = num + 1; num1 < 10; num1++)
		{

		putchar((num % 10) + '0');
		putchar((num1 % 10) + '0');

		if (num == 8 && num1 == 9)
			continue;

		putchar(',');
		putchar(' ');

		}
	}
	putchar('\n');

	return (0);
}
