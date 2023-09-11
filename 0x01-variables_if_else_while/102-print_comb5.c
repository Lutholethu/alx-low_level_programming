#include <stdio.h>

/**
 * main - main function to print two digit number combinations
 * without any repetion
 *
 * Return: always 0
 */

int main(void)
{
	int i = '0';
	int j = '0';

	for  (i = 0 ; i <= 99)
	{
		while (j = 0 ; j <= 99)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');

				}
			}
			j++;	
		}
		j = '0';
		i++;

	}
	putchar('\n');
	return (0);

}
