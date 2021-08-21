#include <unistd.h>

void ft_print_comb(void)
{
	int *str[3];

	str=0;

	while (str < 1000 )
	{
		if(str[0] < str[1] < str[2])
		{
			write(1, &str, 3);
			str++;
		}
	}
}

int main(void)
{
	ft_print_comb();
	return 0;
}
