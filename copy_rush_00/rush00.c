void ft_putchar(char c);

void conditional(int row, int col, int x, int y)
{
	if((row == 1 || row == y) && (col == 1 || col == x))
	{
		ft_putchar('o');
	}
	else if(row == 1 || row == y)
	{
		ft_putchar('-');
	}
	else if(col == 1 || col == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar('O');
	}
}

void rush(int x, int y)
{
	int row;
	int col;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			conditional(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
