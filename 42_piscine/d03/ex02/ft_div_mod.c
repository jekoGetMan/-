#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){

int result = a / b;
div = &result;
int result1 = a % b;
mod = &result1;

int tst1;
int tst2;

tst1 = *div;
tst2 = *mod;
printf("%d\n%d\n", tst1, tst2);
}

int main(void)
{
	int *ptr1;
	int *ptr2;

	ft_div_mod(2, 2, ptr1, ptr2);
	return (0);
}