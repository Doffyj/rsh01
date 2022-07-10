/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fourbuilds.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:06:09 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/10 02:17:27 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fourbuilds.h"
#include <stdio.h>

int	top4build(char	*str, int arr[][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (str[i] == 4)
		{
			arr[0][i] = 1;
			arr[1][i] = 2;
			arr[2][i] = 3;
			arr[3][i] = 4;
		}
	i++;
	}
	return 0;
}

int	bot4build(char	*str, int arr[][4])
{
	int	i;

	i = 4;
	while (i < 8)
	{
		if (str[i] == 4)
		{
			arr[i - 4][3] = 1;
			arr[i - 4][2] = 2;
			arr[i - 4][1] = 3;
			arr[i - 4][0] = 4;
		}
	i++;
	}
	return 0;
}

int	left4build(char	*str, int arr[][4])
{
	int	i;

	i = 8;
	while (i < 12)
	{
		if (str[i] == 4)
		{
			arr[3][i - 8] = 4;
			arr[2][i - 8] = 3;
			arr[1][i - 8] = 2;
			arr[0][i - 8] = 1;
			printf("a");
		}
	i++;
	}
	return 0;
}

int	right4build(char	*str, int arr[][4])
{
	int	i;

	i = 12;
	while (i < 16)
	{
		if (str[i] == 4)
		{
			arr[3][i - 12] = 1;
			arr[2][i - 12] = 2;
			arr[1][i - 12] = 3;
			arr[0][i - 12] = 4;
		}
	i++;
	}
	return 0;
}

void	fourbuild(char *str, int arr[][4])
{
	top4build(str, arr);
	bot4build(str, arr);
	left4build(str, arr);
	right4build(str, arr);
}