#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src) {
    int x = 0;
    int y = 0;

    while (dest[x] != '\0') 
    {
        x++;
    }

    while (src[y] != '\0') 
    {
        dest[x] = src[y];
        x++;
        y++;
    }

    dest[x] = '\0';

    return dest;
}

int main() 
{
    char dest[50] = "Merhaba "; 
    char src[] = "Dünya";
    ft_strcat(dest, src);
    printf("Sonuç: %s\n", dest);
    return 0;
}
