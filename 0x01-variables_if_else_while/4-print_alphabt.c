#include <stdio.h>
/**
 * main - Entry point
 * Description : 'checks if number is zero,negative or positive;
 * Return: always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i  == 'e')
		i++;
		else if (i == 'q')
		i++;
		else
			putchar (i);
	putchar ('\n');
	return (0);
}
