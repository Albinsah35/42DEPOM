#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *buffer;
    unsigned int start;

    start = 0;
    buffer = dest;
    while (start < n)
    {
        if (*src == '\0') 
            *buffer = '\0'; 
        else
        {
            *buffer = *src; 
            src++;
        }
        buffer++;
        start++;
    }
    return dest;
}
int main(void)
{
    char src[] = "Kerhane Tatlisi"; 
    char dest[31]; 
    unsigned int n = 7;

    ft_strncpy(dest, src, n); 
    printf("giren: %s\n", src); 
    printf("cikan: %s\n", dest); 

    return 0;
}

