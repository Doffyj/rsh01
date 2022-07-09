/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onebuilds.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:40:36 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/09 17:56:39 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "onebuilds.h"

int	top1build(char	*str, int arr[][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (str[i] == 0)
		{
			arr[0][i + 1] = 4;
		}
	i++;
	}
	return 0;
}

int	bot1build(char	*str, int arr[][4])
{
	int	i;

	i = 4;
	while (i < 8)
	{
		if (str[i] == 0)
		{
			arr[3][i - 4] = 4;
		}
	i++;
	}
	return 0;
}

int	left1build(char	*str, int arr[][4])
{
	int	i;

	i = 8;
	while (i < 12)
	{
		if (str[i] == 0)
		{
			arr[0][i - 8] = 4;
		}
	i++;
	}
	return 0;
}

int	right1build(char	*str, int arr[][4])
{
	int	i;

	i = 12;
	while (i < 16)
	{
		if (str[i] == 0)
		{
			arr[i - 12][3] = 4;
		}
	i++;
	}
	return 0;
}

void	onebuild(char *str, int arr[][4])
{
	top1build(str, arr);
	bot1build(str, arr);
	left1build(str, arr);
	right1build(str, arr);
}