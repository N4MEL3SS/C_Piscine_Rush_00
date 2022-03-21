void	ft_putchar(char c);

void	ft_print(int x, char fst_char, char mid_char, char lst_char)
{
	if (x > 0 && x--)
		ft_putchar(fst_char);
	while (x > 1 && x--)
		ft_putchar(mid_char);
	if (x == 1)
		ft_putchar(lst_char);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if ((x > 0) && (y > 0))
	{
		if (y > 0 && y--)
			ft_print(x, 'A', 'B', 'C');
		while (y > 1 && y--)
			ft_print(x, 'B', ' ', 'B');
		if (y == 1)
			ft_print(x, 'C', 'B', 'A');
	}
}
