#include <stdio.h>

int	main(void){

	unsigned short int i;
	unsigned short int j;

	i = 1;
	j = 1;

	for (i = 1; i < 3; i++){
		printf("i: %d, ", i);
			for (j = 1; j <= 3; j++)
				printf("j: %d, ", j);
	}
}
