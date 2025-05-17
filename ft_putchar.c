#include<unistd.h>

void ft_Putchar(char c)
{
	write (1,&c,1);
}
