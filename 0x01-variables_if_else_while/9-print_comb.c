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
       
	for (n = 48; n <= 57; n++)
	 {
		 putchar (n);
		 if  (n ==57)
		 {
			 continue;
		 }
			 putchar (',');
			 putchar (' ');
		 }
		 putchar('\n');
		 return (0);
}
