
#include <stdio.h>

void	builder(char *str, int arr[][4]);

void	printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i] + 48);
		i++;
	}
	printf("\n");
}

void	demo(char *str)
{
	int	arr[4][4];

	builder(str, arr);
	printstr(str);
	int i = 0;
	int j = 0;
	while (i < 4){
		while (j < 4){
			printf("%d " , arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
		j = 0;
	}
}

void	error0(int argc, char *argv)
{
	int		i;
	int		j;
	char	arr[16];

	i = 8;
	while (i < 39)
	{
		arr[j] = argv[i] - 48;
		j++;
		i += 2; 
	}
	demo(arr);
}



int	main(int argc, char *argv[])
{
	error0(argc, *argv);
	return (0);
}
