#include<unistd.h>
#include<stdio.h>
int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
int main(void)
{
    char str1[] = "prof lol oyuncusu";
    char str2[] = "316293";


    printf("str1: \"%s\" == %d\n", str1, ft_str_is_numeric(str1));
    printf("str2: \"%s\" == %d\n", str2, ft_str_is_numeric(str2));

    return 0;
}
