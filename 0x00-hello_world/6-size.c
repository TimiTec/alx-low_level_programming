#include <stdio.h>

/**
 * main - Prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	int inttype;

	long longtype;

	long int longtypedouble;

	float floattype;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));

	printf("Size of an int: %lu byte(s)\n", sizeof(inttype));

	printf("Size of a long int: %lu byte(s)\n", sizeof(longtype));

	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));

	printf("Size of a float: %lu byte(s)\n", sizeof(floattype));

	return (0);
}
