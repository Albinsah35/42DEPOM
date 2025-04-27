#include<unistd.h>
#include <stdio.h>
void ft_swap(int  *a , int *b)
{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;
}
/*int main(void)
{
	    int q 31, w = 62;

    ft_swap(&num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}*/



