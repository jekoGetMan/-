#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void){
	char index;
	
	index = 'a';
	while(index <= 'z')
	{
		ft_putchar(index);
		index++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}