void	ft_putchar(char c);

void	ft_print(int x, char fir_end_char, char mid_char)
{
	if (x > 0)
	{
		ft_putchar(fir_end_char);
		x--;
	}
	while (x > 1)
	{
		ft_putchar(mid_char);
		x--;
	}
	if (x == 1)
		ft_putchar(fir_end_char);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if ((x > 0) && (y > 0))
	{
		if (y > 0)
		{
			ft_print(x, 'o', '-');
			y--;
		}
		while (y > 1)
		{
			ft_print(x, '|', ' ');
			y--;
		}
		if (y == 1)
			ft_print(x, 'o', '-');
	}
}
