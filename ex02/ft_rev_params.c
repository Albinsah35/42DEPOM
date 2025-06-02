#include<unistd.h>

int main (int argc, char *argv[])
{
	int	x;
	int	y;
	
	x  = argc -1;
	while (x >= 1)
	{
		y = 0;
		while(argv[x][y])
			y ++;
		write(1,argv[x],1);
		write(1, "\n",1);
		 x --;
	}
	return (0);
}
