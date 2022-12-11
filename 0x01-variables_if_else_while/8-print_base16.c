#include <stdio.h>
/**
 * main - prints base 16 numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	return (0);

}
