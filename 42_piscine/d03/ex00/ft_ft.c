#include <stdio.h>

void ft_ft(int *nbr){
	int test = 42;
	int *onePointer = NULL;

	onePointer = &test;

	int oneResult = 0;
	oneResult = *onePointer;
	*onePointer = 42;
	//*nbr = 42;
	printf("%d\n", oneResult);
}

int main(void){
	//int tst;
	int *ptr;

	//ptr = &tst;
	//*ptr = 50;

	ft_ft(ptr);
	return (0);
}