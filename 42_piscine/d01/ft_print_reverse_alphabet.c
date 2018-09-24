#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void){
	char index;

	index = 'z';
	while ('a' <= index)
	{
		ft_putchar(index);
		index--;
	}
}

int main(void){
	ft_print_reverse_alphabet();
	return (0);
}

