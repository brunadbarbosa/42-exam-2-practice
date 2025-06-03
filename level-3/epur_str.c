#include <unistd.h>
<<<<<<< HEAD
int	count_words(char *str)
{
	int	i = 0;
	int	count = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			count++;
			while (str[i] && (str[i] != ' ' && str[i] != '\t'))
				i++;
		}
		else
			i++;
	}
	return (count);

}
=======
>>>>>>> 8e5af4a (commit)
int	main(int argc, char **argv)
{
	if (argc == 2)
	{	
		int	i = 0;
		int	words = 0;
		int	end = count_words(argv[1]);
		while (argv[1][i])
		{
<<<<<<< HEAD
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				words++;
				while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
				{
					write (1, &argv[1][i], 1);
					i++;
				}
				if (words < end)
					write (1, " ", 1);
			}
			else
				i++;
=======
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (argv[1][i + 1] == '\0')
					break;
				while (argv[1][i] == ' ' || argv[1][i] == '\t')
					i++;
				write(1, " ", 1);
			}
			else
				write (1, &argv[1][i], 1);
>>>>>>> 8e5af4a (commit)
		}
	}
	write (1, "\n", 1);
	return (0);
}