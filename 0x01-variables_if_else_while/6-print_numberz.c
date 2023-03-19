#include <stdio.h>
/**
 * main - Entry point
 * Description : 'checks if number is zero,negative or positive;
 * Return: always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
