/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lncheck.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:33:03 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/09 19:46:36 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_is_reserved(int i, int j, char *str)
{
	int	k;

	if ()
}
void	ft_swap(int i, int arr[][4])
{
	
}

int	ft_sumat(int i, int arr[][4])
{
	int	j;
	int	sumat;

	sumat = 0;
	j = 0;
	while (j < 4)
	{
		sumat = sumat + arr[i][j];
		j++;
	}
	return (sumat);
}

void	ft_checksum(char *str, int arr[][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		while	(ft_sumat(i, arr) != 10)
			ft_swap(i, arr);
		i++;
	}

}