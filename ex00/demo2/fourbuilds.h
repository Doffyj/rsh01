/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fourbuilds.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:40:22 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/09 17:56:02 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FOURBUILDS_H
#define FOURBUILDS_H

int		top4build(char	*str, int arr[][4]);
int		bot4build(char	*str, int arr[][4]);
int		left4build(char	*str, int arr[][4]);
int		right4build(char	*str, int arr[][4]);
void	fourbuild(char *str, int arr[][4]);

#endif