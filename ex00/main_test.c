#include <stdio.h>

void	ft_print(int str_len)
{
	int	i;

	i = 0;
	if (str_len > 0)
	{
		str_len--;
		i++;
	}
	while (str_len > 1)
	{
		str_len--;
		i++;
	}
	if (str_len == 1)
		i++;
	printf("x = %i\n", i);
}

void	rush(int x, int y)
{
	int	t;

	t = 0;
	if ((x > 0) && (y > 0))
	{
		if (y > 0)
		{
			ft_print(x);
			y--;
			t++;
		}
		while (y > 1)
		{
			ft_print(x);
			y--;
			t++;
		}
		if (y == 1)
		{
			ft_print(x);
			t++;
		}
	}
	printf("y = %i\n", t);
}

int	main(void)
{
	int	x_width;
	int	y_height;

	x_width = 2147483647;
	y_height = 5;
	rush(x_width, y_height);
}
