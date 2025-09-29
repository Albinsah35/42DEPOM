/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cikuntay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:35:07 by cikuntay          #+#    #+#             */
/*   Updated: 2025/09/29 12:35:13 by cikuntay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    // ft_memset - bellek bölgesini belirli bir değerle doldurur
    char buffer1[10];
    ft_memset(buffer1, 'A', sizeof(buffer1));
    write(1, buffer1, 10);
    write(1, "\n", 1);

    // ft_memcpy - bir bellek bölgesinden diğerine veri kopyalar (overlap yoksa)
    char src1[] = "Hello";
    char dst1[10];
    ft_memcpy(dst1, src1, 6);
    printf("ft_memcpy: %s\n", dst1);

    // ft_memmove - overlap olsa bile güvenli bellek kopyalama yapar
    char overlap[] = "123456789";
    ft_memmove(overlap + 2, overlap, 5);
    printf("ft_memmove: %s\n", overlap);

    // ft_bzero - bellek bölgesini sıfırlar (null karakterle)
    char zeroed[5] = "ABCD";
    ft_bzero(zeroed, 4);
    write(1, zeroed, 4);
    write(1, "\n", 1);

    // ft_memchr - bir karakteri belirtilen byte uzunluğunda arar
    char memstr[] = "OpenAI";
    char *memfound = ft_memchr(memstr, 'A', 6);
    printf("ft_memchr: %s\n", memfound);

    // ft_strchr - bir karakteri bir string içinde arar (ilk bulduğunu döner)
    char *strchr_result = ft_strchr("Merhaba", 'h');
    printf("ft_strchr: %s\n", strchr_result);

    // ft_memcmp - iki bellek bölgesini karşılaştırır
    int cmp = ft_memcmp("abc", "abc", 3);
    printf("ft_memcmp: %d\n", cmp);

    // ft_calloc - heap'te sıfırlanmış bellek alanı ayırır
    int *arr = (int *)ft_calloc(4, sizeof(int));
    for (int i = 0; i < 4; i++)
        printf("ft_calloc[%d]: %d\n", i, arr[i]);
    free(arr);

    // ft_strdup - bir string'i heap'e kopyalar
    char *dup = ft_strdup("OpenAI");
    printf("ft_strdup: %s\n", dup);
    free(dup);

    // ft_strlen - string uzunluğunu döner
    size_t len = ft_strlen("OpenAI");
    printf("ft_strlen: %zu\n", len);

    // ft_strrchr - bir karakterin string içindeki son konumunu bulur
    char *rchr = ft_strrchr("test string", 't');
    printf("ft_strrchr: %s\n", rchr);

    // ft_strnstr - bir substring'i belli uzunlukta arar
    char *found = ft_strnstr("Hello World", "World", 11);
    printf("ft_strnstr: %s\n", found);

    // ft_strncmp - iki stringi n karaktere kadar karşılaştırır
    int sncmp = ft_strncmp("abc", "abd", 3);
    printf("ft_strncmp: %d\n", sncmp);

    // ft_strlcat - bir stringi diğerine belli uzunlukla birleştirir
    char dst2[20] = "Merhaba, ";
    size_t catlen = ft_strlcat(dst2, "dünya!", 20);
    printf("ft_strlcat: %s (len: %zu)\n", dst2, catlen);

    return 0;
}

