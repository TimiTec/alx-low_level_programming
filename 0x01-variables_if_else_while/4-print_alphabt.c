#include <stdio.h>
/**
 * main - Prints the alphabets except q and e
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('\n');

	return (0);
}