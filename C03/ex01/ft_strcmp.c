#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;

    while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
    {
        if (s1[i] == s2[i])
            i++;
        else if (s1[i] < s2[i])
            return (-1);
        else
            return (1);
    }
    return (0);
}

int main()
{
    printf("Test 1: %d\n", ft_strncmp("apple", "apple", 5));
    return 0;
}
