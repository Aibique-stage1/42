void rush(int x, int y);

int ft_atoi(char *str)
{
	int num;
	int i;
	i = 0;
	num = 0;
	while (str[i] <= ' ')
	{
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = num*10 + (str[i] - 48);
		i++;
	}
	return (num);
}

int main(int argn, char **argc)
{
	int x;
	int y;
	if(argn == 3 )
	{
		x = ft_atoi(argc[1]);
		y = ft_atoi(argc[2]);
		rush(x, y);
		return(0);
	}
}
