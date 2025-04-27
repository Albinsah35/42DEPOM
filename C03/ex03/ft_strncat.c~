#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
	 {
		     unsigned int x = 0;
		         unsigned int y = 0;


			     while (dest[x]) 
				         {
						         x++;
							     }

			         while (src[y] && y < nb) 
					     {
						             dest[x + y] = src[y];
							             y++;
								         }
				     dest[x + y] = '\0';

				         return dest;
	 }

int main() 
{
	    char dest[50] = "sik";
	        char src[] = "is";
		    unsigned int nb = 3;    

		        ft_strncat(dest, src, nb);
			    printf("sIKIS: %s\n", dest);

			        return 0;
}

