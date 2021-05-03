#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);

int     main()
{
    printf("MINE 3 = %d\n", ft_strcmp("01234", "01234"));
    printf("REAL 3 = %d\n", strcmp("01234", "01234"));
    printf("MINE 6 = %d\n", ft_strcmp("", ""));
    printf("REAL 6 = %d\n", strcmp("", ""));
    printf("MINE 7 = %d\n", ft_strcmp("abc", ""));
    printf("REAL 7 = %d\n", strcmp("abc", ""));
    printf("MINE 8 = %d\n", ft_strcmp("", "abc"));
    printf("REAL 8 = %d\n", strcmp("", "abc"));
    printf("MINE 9 = %d\n", ft_strcmp("012", "016"));
    printf("REAL 9 = %d\n", strcmp("012", "016"));
    printf("MINE 10 = %d\n", ft_strcmp("016", "012"));
    printf("REAL 10 = %d\n", strcmp("016", "012"));
    printf("MINE 12 = %d\n", ft_strcmp("01655", "012"));
    printf("REAL 12 = %d\n", strcmp("01655", "012"));
    printf("MINE 13 = %d\n", ft_strcmp("012", "01655"));
    printf("REAL 13 = %d\n", strcmp("012", "01655"));
	printf("\n");
	
	printf("MINE 1 = %d\n", ft_strncmp("11234", "01234", 0));
    printf("REAL 1 = %d\n", strncmp("11234", "01234", 0));
	printf("MINE 2 = %d\n", ft_strncmp("01234", "01234", 4));
    printf("REAL 2 = %d\n", strncmp("01234", "01234", 4));
	printf("MINE 3 = %d\n", ft_strncmp("01234", "01234", 5));
    printf("REAL 3 = %d\n", strncmp("01234", "01234", 5));
	printf("MINE 6 = %d\n", ft_strncmp("", "", 7));
    printf("REAL 6 = %d\n", strncmp("", "", 7));
	printf("MINE 7 = %d\n", ft_strncmp("abc", "", 7));
	printf("REAL 7 = %d\n", strncmp("abc", "", 7));
	printf("MINE 8 = %d\n", ft_strncmp("", "abc", 7));
	printf("REAL 8 = %d\n", strncmp("", "abc", 7));
	printf("MINE 11 = %d\n", ft_strncmp("016", "012", 2));
	printf("REAL 11 = %d\n", strncmp("016", "012", 2));
    printf("MINE 12 = %d\n", ft_strncmp("01655", "012", 4));
    printf("REAL 12 = %d\n", strncmp("01655", "012", 4));
    printf("MINE 13 = %d\n", ft_strncmp("012", "01655", 4));
    printf("REAL 13 = %d\n", strncmp("012", "01655", 4));
	
	/*char src[] = "56789";
    char dest[] = "01234";
	printf("MINE = %s\n", ft_strcat(dest, src));
    printf("REAL = %s\n", strcat(dest, src));*/

	/*char src[] = "012";
    char dest[10] = "01234";
	unsigned int n = 2;
	printf("MINE = %s\n", ft_strncat(dest, src, n));
    printf("REAL = %s\n", strncat(dest, src, n));*/

	/*char str[] = "hello corcou ca va toi ?";
    char to_find[] = "";
	printf("MINE = %s\n", ft_strstr(str, to_find));
    printf("REAL = %s\n", strstr(str, to_find));*/

	/*char src[77] = "salut";
	char dest1[77] = "coucou";
	char dest2[77] = "coucou";
	int size = 0;*/

	/*char *src = "Hello!";
	char dest1[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
	char dest2[50] = { [ 0 ... 10 ] = '4', [ 12 ... 49 ] = '2' };
	printf("%d %s\n", ft_strlcat(dest1, src, 1), dest1);
	printf("%lu %s\n", strlcat(dest2, src, 1), dest2);
	printf("MINE = %d %s\n", ft_strlcat(dest, src, size), dest);
	printf("REAL = %lu %s\n", strlcat(dest2, src, size), dest2);*/
    return (0);
}
