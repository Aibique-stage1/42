void ft_putchar(char c);

void conditional(int row, int col, int x, int y)
{
	if((row == 1 && col == 1) || ((row == x && col == 1) && x >1 )
	{
		ft_putchar('A');
	}
	else if( (col == y && y > 1) && ( row == 1 || row == x))
	{
		ft_putchar('C');
	}
	else if(col == 1 || col == y || row == 1 || row == x)
	{
		ft_putchar('B');
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
	while ( row <= y)
	{
		col = 1;
		while ( col <= x)
		{
			conditional(row,col,y,x);
			col ++;
		}
		ft_putchar('\n');
		row++;
	}
}
