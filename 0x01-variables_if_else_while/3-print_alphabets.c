#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp;

	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
	
