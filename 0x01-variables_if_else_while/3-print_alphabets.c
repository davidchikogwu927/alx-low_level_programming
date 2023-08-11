#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char Lower = 'a';
	char upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}
	while (Upper <= 'z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);
}
