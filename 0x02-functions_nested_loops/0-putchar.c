#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char *d = "_putchar";
	int i = 0;

	while (d[i])
	{
		_putchar(d[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
