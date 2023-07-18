#include <unistd.h>

void _putchar(char c)
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
	write(1, "\n", 1);
	return (0);
}
