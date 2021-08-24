#include <stdio.h>
#include <string.h>

//ex00
int ft_strlen(char *str);
//ex01
void ft_putstr(char *str);
//ex02
void ft_putnbr(int nb);
//ex03
int ft_atoi(char *str);
//ex04
void ft_putnbr_base(int nbr, char *base);
//ex05
//int ft_atoi_base(char *str, char *base);

int main(void)
{
	/*
	//ex00
	char *s1;

	s1 = "Hola mundo";
	printf("%d\n", ft_strlen(s1));
	//ex01
	char *s1;

	s1 = "Hola mundo";
	ft_putstr(s1);
	//ex02
	int nbr;

	nbr = 0;
	ft_putnbr(nbr);
	*/
	//ex03
	char *s1;

	s1 = "+ +5639482a2";
	printf("%d\n", ft_atoi(s1));
	/*
	//ex04
	printf("Decimals ------------------\n");
	ft_putnbr_base(16, "0123456789");
	printf("\n");
	printf("Hexadecimal ---------------\n");
	ft_putnbr_base(16, "0123456789abcdef");
	printf("\n");
	printf("Binary --------------------\n");
	ft_putnbr_base(16, "01");
	printf("\n");
	printf("Octobinary ----------------\n");
	ft_putnbr_base(16, "poniguay");
	printf("\n");
	//ex05
	*/
	return (0);
}
