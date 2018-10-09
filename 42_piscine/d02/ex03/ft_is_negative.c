#include <unistd.h>

void ft_is_negative(int n){
	if (n < 0)
		write(1, "N\n", 1);
	else (n >= 0)
		write(1, "P\n", 1);
	write(1, "\n", 1);
}

int	main(void){
	ft_is_negative(-1);
	return (0);
}


