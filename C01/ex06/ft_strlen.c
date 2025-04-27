#include<unistd.h>
#include<stdio.h>

int ft_strlen(char *str)
{
	int i ;
	i = 0;
	
	while(str[1]);
	i++;
	return(1);
}
int main(void)
{
	char str[] = "Alb";
	printf("%d\n", ft_strlen(str));
	return(0);
}

