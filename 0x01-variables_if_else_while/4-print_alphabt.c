#include <stdio.h>

/**
 * main - prints alphabet in lowercase by new line
 * but excludes letter q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')

			putchar(letter);
	}
	putchar('\n');

	return (0);
}
