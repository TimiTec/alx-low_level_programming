#include "main.h"
/**
 * _islower - returns 1 if the letter is a lowercase, 0 if it isnt.
 * Return: 1 if the lowercase, 0 if it isnt
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return(1);
	else
		return(0);
}
