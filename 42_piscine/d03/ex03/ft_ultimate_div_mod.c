#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;

	int Result1;
	int Result2;

	*a = Result1;
	*b = Result2;


	printf("%d\n%d\n", Result1, Result2);
}

int main(void)
{
	int tst1;
	int tst2;
	int *ptr1;
	int *ptr2;

	tst1 = 2;
	tst2 = 2;

	ptr1 = &tst1;
	ptr2 = &tst2;

	ft_ultimate_div_mod(ptr1, ptr2);
	return (0);
}