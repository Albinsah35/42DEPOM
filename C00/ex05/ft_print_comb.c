#include <unistd.h>

void	ft_putchar(char xyz)
{
	write(1, &xyz, 1);
}

void	ft_result(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	if (!(x == '7' && y == '8' && z == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	for (char x = '0'; x <= '7'; x++)
		for (char y = x + 1; y <= '8'; y++)
			for (char z = y + 1; z <= '9'; z++)
				ft_result(x, y, z);
}
int main ()
{
	ft_print_comb();
	return 0;
}
