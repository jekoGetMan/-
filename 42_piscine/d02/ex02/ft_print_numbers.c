#include <unistd.h>

void ft_putchar(char display){
	write(1, &display, 1);
}

void ft_print_numbers(void){
	char digit;
	
	digit = '0';
	while (digit <= '9') // till nine because of ascii-table
	{
		ft_putchar(digit);
		digit++;
	}
	write(1, "\n", 1);
}

int	main(void){
	ft_print_numbers();
	return (0);
}