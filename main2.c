char *ft_strcapitalize(char *str);
void ft_putstr_non_printable(char *str);

int		main()
{
	/*char src[] = "Salut";
	char dest[] = "";
	printf("Dest = %s\n", ft_strcpy(dest, src));*/

	
	/*char src[] = "ch";
    char dest[] = "Salutation";
	unsigned int n = 5;
    printf("Dest = %s\n", ft_strncpy(dest, src, n));
	printf("Dest real = %s", strncpy(dest, src, n));*/
	

	/*printf("%d\n", ft_str_is_printable("Je suis sympas 6565 '\":;<>?/)(*&^%$#@!~`+=_-"));
	printf("%d\n", ft_str_is_printable("	"));*/

	/*char str[] = "Coucou Je Suis LA";
	printf("%s\n", ft_strlowcase(str));*/
	
	//char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	//char str[] = "SALUT, COMMENT tu vas ? 42Mots quarante-deux; cinquante+et+un";
	//printf("%s\n", str);
	//printf("%s\n", ft_strcapitalize(str));

	/*char src[] = "012345";
	char dest[] = "012";
	unsigned int size = 3;
	printf("MINE %d\n", (int)ft_strlcpy(dest, src, size));
	printf("REAL %d\n", (int)strlcpy(dest, src, size));*/

	char *str = "Coucou \n ca va ?\t \v";
	ft_putstr_non_printable(str);
	return (0);
}
