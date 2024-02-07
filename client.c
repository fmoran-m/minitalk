#include "minitalk.h"

static char	*char_to_bin(char c)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 7;
	str = calloc(8, sizeof(char));
	while(i > -1)
	{
		str[i] = ((c >> j) & 1) + 48;
		j++;
		i--;
	}
	return (str);
}

int main(int argc, char **argv)
{
	char	*binary;
	int		i;

	i = 0;
	if (argc != 3)
	{
		printf("%s\n", "Incorrect arguments");//meter mensaje a salida de errores 
		exit(-1);
	}
	//if (!ft_isdigit(argv[2]))
	//	exit(-1);
	while (argv[2][i])
		i++;
	binary = calloc((i * 8) + 1, sizeof(char)); //sustituir por ft
	if (!binary)
		exit(-1); //Mensaje stderror
	i = 0;
	while(argv[2][i])
	{
		binary = char_to_bin(argv[2][i]);
		i++;
	}
	printf("%s\n", binary);
	free(binary);
	return (0);
}
