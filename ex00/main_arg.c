#include <unistd.h>

void	rush(int x, int y);

void	error_msg()
{
	write(1, "Please enter 2 numbers. \n", 25);
	write(1, "Example: ./a.out 5 5\n", 21);
}

int	ft_atoi(const char *str)
{
	short int	sign;
	long		result;

	result = 0;
	sign = 1;
	if (*str == '-' && ++str)
		sign = -1;
	else if (*str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
		result = result * 10L + (long)*str++ - 48L;
	return ((int)result * sign);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	else
		error_msg();
	return (0);
}
