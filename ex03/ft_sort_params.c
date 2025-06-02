#include<unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}
int	ft_strcmp(char *s1,char *s2)
{
	int	i;

	i = 0;
	while (*s1 || *s2)
		{
			if( *s1 != *s2)
				return((unsigned char )*s1 - (unsigned char)*s2);
			s1 ++;
			s2 ++;
		}
	return (0);
}
void ft_sort_param (char **tab ,int ac)
{
	int	x;
	int	y;
	char *temp;
	
	x = 1;
	while(x < ac -1)
	{
		y = x + 1;
		while (y < ac )
		{
			if(ft_strcmp(tab[x],tab[y]) < 0)
			{
				temp = tab[y];
				tab[y] = tab[x];
				tab[x] = temp;
			}
			y ++;
		}
		x ++;
	}
}
int main (int ac, char **av)
{
	int	x;
	int	y;

	ft_sort_param(av,ac);
	x = 1;
	while(x < ac)
	{
		y = 0;
		while(av[x][y])
			y ++;
		write(1, av[x], y);
		write(1 , "\n",1);
		x ++;
	}
	return (0);
}

