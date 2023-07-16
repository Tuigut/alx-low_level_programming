#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase
 *              excluding the letters 'q' and 'e'
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++) 
	if (ch != 'q' && ch != 'e') 
		putchar(ch);

	putchar('\n');

	return (0);
}

