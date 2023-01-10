#include <unistd.h>
/**
 * _putchar - writes the characters to standard output
 *
 * Return: On success 1.
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
