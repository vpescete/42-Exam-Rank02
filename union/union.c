#include <unistd.h>

int	check_doppie(char *s, char c, int end)
{
	int i = 0;

	while (i < end)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (check_doppie(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		while (av[2][j])
		{
			if (check_doppie(av[1], av[2][j], i) && check_doppie(av[2], av[2][j], j))
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return 0;
}