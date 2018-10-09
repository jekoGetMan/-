#include <unistd.h>

void ft_putchar(char display)
{
	write(1, &display, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void){
	char someStr[] = "lol";
	// char *ptr;

	// *ptr = &someStr;
	ft_putstr(someStr);
	return (0);
}

