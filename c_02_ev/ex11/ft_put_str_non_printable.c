#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_decimal_to_hexadecimal(unsigned char n)
{
	char *unp;

	unp = "0123456789abcdef";
	ft_putchar(unp[n / 16]);
	ft_putchar(unp[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_decimal_to_hexadecimal(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main (void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien");
	ft_putchar('\n');
	ft_putstr_non_printable("Coucou tu vas bie\t\v\0n");
	ft_putchar('\n');
	ft_putstr_non_printable("");
} 