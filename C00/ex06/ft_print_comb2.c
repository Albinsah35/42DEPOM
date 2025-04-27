#include <unistd.h>

void	ft_putchar(char value)
{
	write(1, &value, 1);
}

void	ft_print_comb2(void)
{
	int x;
	int y;
	char x1, x2, y1, y2;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			 
			x1 = (x / 10) + '0';
			x2 = (x % 10) + '0';
			ft_putchar(x1);
			ft_putchar(x2);
			
			ft_putchar(' '); 

		
			y1 = (y / 10) + '0';
			y2 = (y % 10) + '0';
			ft_putchar(y1);
			ft_putchar(y2);

			
			if (x < 98 || y < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}

			y++;
		}
		x++;
	}
}
int main ()
{
	ft_print_comb2();
	return 0;
}
