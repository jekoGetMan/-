#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0') 
	{
		i++;
	}
	printf("%d\n", i);
	return str[i];
}

int main(void){
	char someStr[] = "kok";

	ft_strlen(someStr);
	return (0);
}