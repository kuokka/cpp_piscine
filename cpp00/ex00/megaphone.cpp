#include <iostream>

void	beep(void)
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

char	to_upper(char c)
{
	if ('a' <= c && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

void	stream(int argc, char **argv)
{
	int		idx;
	int		jdx;

	idx = 1;
	while (idx < argc)
	{
		jdx = 0;
		while (argv[idx][jdx] != '\0')
		{
			std::cout << to_upper(argv[idx][jdx]);
			jdx++;
		}
		idx++;
	}
	std::cout << std::endl;
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		beep();
	else
		stream(argc, argv);
	return (0);
}
