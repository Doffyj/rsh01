/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onebuilds.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:39:34 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/09 17:55:29 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ONEBUILDS_H
#define ONEBUILDS_H

int		top1build(char	*str, int arr[][4]);
int		bot1build(char	*str, int arr[][4]);
int		right1build(char	*str, int arr[][4]);
int		left1build(char	*str, int arr[][4]);
void	onebuild(char *str, int arr[][4]);

#endif