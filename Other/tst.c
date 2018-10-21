#include <unistd.h>
#define N 5

void ft_putchar(int display)
{
	write(1, &display, 1);
}

int	main(void)
{
	char int array[N];
	char int i;
	char int j;
	char int tmp;

	array[0] = '7';
	array[1] = '2';
	array[2] = '9';
	array[3] = '0';
	array[4] = '3';

	for(i = 1; i <= N-1; i++)
	{
		for(j = 1; j <= N-i; j++)
		{
			if (array[j] > array[j+1])
			{
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}
	for(i=0; i <= N; i++)
	{
		ft_putchar(array[i]);
	}
	return (0);
	}
