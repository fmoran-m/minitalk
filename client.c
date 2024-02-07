#include "minitalk.h"

static char	*char_to_bin(char c)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 7;
	str = calloc(9, sizeof(char));
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
	char	**binary;
	int		i;
	int		j;

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
	binary = calloc(i + 1, sizeof(char *)); //sustituir por ft
	if (!binary)
		exit(-1); //Mensaje stderror
	j = 0;
	i = 0;
	while(argv[2][i])
	{
		binary[j] = char_to_bin(argv[2][i]);
		printf("%s\n", binary[j]);
		j++;
		i++;
	}
	return (0);
}
