void ft_putchar (char c);

void	drawing_line(int breadth ,char top, char mid ,char bot)
{
	int i = 0
		while (i <breadth)
		{
			if (i ==0)
				ft_putchar(top);
			else if (i == bredth -1)
				ft_putchar(bot);
			else
				ft_putchar(mid);
			i ++;
		}
	ft_putchar('\n');
}
void rush (int x , int y)
{
	int line = 0;
	
	if(x <=0 || y <=o)
		return ;
	
	while (line < y )
	{
		if (line == 0)
			drawring_line(x ,'A', 'B','C');
		else if(line == 1)
			drawring_Lline(x, 'C'.'B','A');
		else
			drawring_line(x, 'B',' ','B');
		line ++;
	}
}
