#include <stdio.h>
/**
* main -Print the alphabet in lowercase
* Return: 0 (Success)
*/
int main(void);
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
		{
			alpha++;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
