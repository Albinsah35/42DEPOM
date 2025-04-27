#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0'; 
    return dest;
}

int main(void)
{
    char src[] = "Kocaman yapragim var";
    char dest[50]; 

    ft_strcpy(dest, src); 
    printf("giris: %s\n", src);
    printf("sokus: %s\n", dest);

    return 0; 
}
