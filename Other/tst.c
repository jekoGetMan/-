#include <unistd.h>

void ft_putchar(int display)
{
	write(1, &display, 1);
}

int	main(void)
{
	short int array[4] = {'1', '2', '3', '4'};
	short int i;

	i = 0;
	while (i < 4)
	{
		ft_putchar(array[i]);
		i++;
	}
}