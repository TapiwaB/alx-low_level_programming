#include <stdio.h>
/**
 * main - Entry point
 * Description : 'checks if number is zero,negative or positive;
 * Return: always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar (n);
		n--;
	}
	putchar ('\n');
	return (0);
}
