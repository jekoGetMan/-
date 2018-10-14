#include <unistd.h>

void ft_putchar(char display)
{
	write(1, &display, 1);
}

void ft_print_alphabet(void)
{
	unsigned short int index;
	
	index = 'a'; // 97
	while (index <= 'z') // 97 <= 122
	{
		ft_putchar(index);
		index++; // b	- 98...
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}
