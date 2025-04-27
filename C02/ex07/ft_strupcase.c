#include <unistd.h>
#include <stdio.h>


char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] -= 32; 
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char str1[] = "ALBINSAH";    
    char str2[] = "Albinsah";    
    

    printf("Test 1: \"%s\" == \"%s\"\n", str1, ft_strupcase(str1));
    printf("Test 2: \"%s\" == \"%s\"\n", str2, ft_strupcase(str2));
   

    return 0;
}
