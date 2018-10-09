#include <stdio.h>
void ft_ultimate_ft(int *********nbr){
	*********nbr = 42;
	printf("%d\n", nbr);
}

int	main(void){
	int tst;
	int *********ptr;

	*********ptr = &tst;
	ft_ultimate_ft(ptr);

	return (0);
}
