#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
	write(1, &c, 1);
}

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
