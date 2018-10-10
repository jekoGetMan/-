#include <stdio.h>

int lol(int nb, int power){
	if (power <= 0)
		return 1;
	else if (power <= 1)
		return nb;
	return 2 * lol(nb, (power-1));
}

int main(void){
	printf("%d\n", lol(2,-1));
	return (0);
}