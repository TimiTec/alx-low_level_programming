#include <stdio.h>
/**
 * main - prints single digit base ten numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');

	return (0);
}
