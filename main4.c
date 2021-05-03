#include <stdio.h>

void    ft_putstr(char *str);
void    ft_putnbr(int nb);
int    	ft_atoi(char *str);
void    ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);

int	main(void)
{
	/*ft_putstr("Coucou ca va ?");
	ft_putstr("\n");
	ft_putnbr(123);
	ft_putstr("\n");
	ft_putnbr(-123);
	ft_putstr("\n");
	ft_putnbr(0);
	ft_putstr("\n");*/
	
	/*printf("Mine 1 %d\n", ft_atoi("  ---+--+1234ab567"));
	printf("Real 1 %d\n", atoi("  ---+--+1234ab567"));
	printf("Mine 2 %d\n", ft_atoi("  ---+--+aa1234ab567"));
	printf("Real 2 %d\n", atoi("  ---+--+aa1234ab567"));
	printf("Mine 3 %d\n", ft_atoi(" aa ---+--+aa1234ab567"));
	printf("Real 3 %d\n", atoi(" aa ---+--+aa1234ab567"));
	*/

/*	
	ft_putnbr_base(1234, "");
	printf("\n");
	ft_putnbr_base(-1234, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(1234, "0123455");
	printf("\n");
	ft_putnbr_base(1234, "0123145");
	printf("\n");
	ft_putnbr_base(-1234, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-1234, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-1234, "0123456789abcdef");
*/
	printf("l1 %d\n", ft_atoi_base("777", "0123456789abcdef"));
	printf("l2 %d\n", ft_atoi_base("-777", "0123456789abcdef"));
	printf("l3 %d\n", ft_atoi_base("  777", "0123456789abcdef"));
	printf("l4 %d\n", ft_atoi_base("  ++---777", "0123456789abcdef"));
	printf("l5 %d\n", ft_atoi_base("  ++--777", "0123456789abcdef"));
	printf("l6 %d\n", ft_atoi_base("  ++--ewfwf777", "0123456789abcdef"));
	printf("l7 %d\n", ft_atoi_base("  ++--777efwfkg5445", "0123456789abcdef"));
	printf("l8 %d\n", ft_atoi_base("  ++--777efwfkg5445", "++0123456789abcdef"));
	printf("l9 %d\n", ft_atoi_base("  ++--777efwfkg5445", "--0123456789abcdef"));
	printf("l10 %d\n", ft_atoi_base("  ++--777efwfkg5445", "00123456789abcdef"));
	printf("l11 %d\n", ft_atoi_base("  ++--777efwfkg5445", "0"));
	printf("l12 %d\n", ft_atoi_base("  ++--777efwfkg5445", ""));
	printf("l12 %d\n", ft_atoi_base("--+--+-+42142", "\t\n\v\f\r0123456789"));
	return (0);
}
