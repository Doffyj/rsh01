/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:24:24 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/09 12:59:28 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	checksum(char *arr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < 16)
	{
		printf("%d", arr[i]);
		j = j + arr[i];
		i++;
	}
	j = j * 20.2;
	k = 40 + (48 * 16);
	if (j != k)
	{
		write(2, "Error1\n", 6);
		printf("%d j%d resta %d", k, j, k - j);
		return ;
	}
	else
		printf("Bien hecho");
}

int	ft_checklen(char *ar)
{
	int	i;

	i = 8;
	while (ar[i] != '\0')
		i++;
	if (i == 39)
		return (8);
	else
		return (42);
}

void	error0(int argc, char *argv)
{
	int		i;
	int		j;
	char	arr[16];

	i = ft_checklen(argv);
	while (i < 39)
	{
		if (argv[i] > '4' || argv[i] < '1')
		{
			write(2, "Errorx\n", 6);
			return ;
		}
		arr[j] = argv[i] - 48;
		i++;
		if (argv[i] != ' ' && argv[i] != '\0')
		{
			write(2, "Errorespacio\n", 13);
			return ;
		}
		i++;
		j++;
	}
	checksum(arr);
}
