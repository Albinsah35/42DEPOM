#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int a = 0, b = 0, c = 0;

    while (dest[a]) a++;
    while (src[b]) b++;

    c = (size <= a) ? size + b : a + b;

    while (src[b] && (a + 1) < size)
     {
        dest[a++] = src[b++];
    }

    dest[a] = '\0';
    return c;
}

int main() 
{
    char dest[50] = "ALBINSAH, ";
    char src[] = "SIKISKEN!";
    unsigned int size = 12;

    printf("CIKTI: %s\n", dest);  
    printf("KAC CM: %u\n", ft_strlcat(dest, src, size));

    return 0;
}
