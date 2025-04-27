#include<unistd.h>
#include<stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
    char str1[] = "ALBINSAH";
    char str2[] = "sehinsah";


    printf("str1: \"%s\" == %d\n", str1, ft_str_is_lowercase(str1));
    printf("str2: \"%s\" == %d\n", str2, ft_str_is_lowercase(str2));

    return 0;
}

