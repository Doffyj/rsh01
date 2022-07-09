
#include <stdio.h>

void	demo(char *a)
{
	int	an = 0; int al = 0;
	int i = 0;

	int arr[4][4];

	while (al < 4){
		while (an < 4){
			arr[al][an] = a[i];
			an++;
			i++;
		}
		al++;
		an = 0;
	}
	al = 0;
	an = 0;
	while (al < 4){
		while (an < 4){
			printf("%d", arr[al][an]);
			an++;
		}
		printf("\n");
		al++;
		an = 0;
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
