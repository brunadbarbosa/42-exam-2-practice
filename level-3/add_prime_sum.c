#include <unistd.h>
int	is_prime(int nbr)
{
	if (nbr < 2)
		return (0);
	int	i = 2;
	while (i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return(i);
}
void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n /10);
	write (1, &"0123456789"[n % 10], 1);
}
int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;
	int	n = 1;

		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				n *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
	return (result * n);
}
int	main(int argc, char **argv)
{
	
	if (argc != 2 || ft_atoi(argv[1]) <= 0)
		write (1, "0\n", 2);
	int	number = ft_atoi(argv[1]);
	int	sum = 0;
	while (number > 1)
	{
		if (is_prime(number))
			sum += number;
		number--;
	}
	ft_putnbr(sum);
	write (1, "\n", 1);
	return (0);
}