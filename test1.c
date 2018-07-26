#include <stdio.h>

#define MAX 10

char c_array[MAX] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

char *c_ptr, count;


float f_array[MAX] = { .0, .1, .2, .3, .4, .5, .6, .7, .8, .9 };

float *f_ptr;


int main (void)
{
/* Инициализация указателей. */ 

c_ptr = c_array;
f_ptr = f_array;

/* Вывод элементов массива */

for(count = 0; count < MAX; count++)
printf("%d\t%f\n", *i_ptr++, *f_ptr++);


return 0;

}
