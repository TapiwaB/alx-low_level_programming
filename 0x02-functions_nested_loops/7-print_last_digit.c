#include "main.h"

/**
 * main - entry point
 * description : prints last digit
 * return : value of lst digit
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
