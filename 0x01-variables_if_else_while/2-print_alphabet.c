#include <stdio.h>

/**
 * main - prints the alphabet.
 *
 * Return:cAlways 0 (Success)
 */
int main(void)
{
	char alph[26] = "abcdefgklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
