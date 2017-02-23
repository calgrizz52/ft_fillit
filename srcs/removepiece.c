/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removepiece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 10:59:26 by mkok              #+#    #+#             */
/*   Updated: 2017/02/03 11:03:39 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		removepiece(char **map, char c)
{
	char	**maphead;
	char	*mapchar;

	maphead = map;
	while (*maphead)
	{
		mapchar = *maphead;
		while (*mapchar)
		{
			if (*mapchar == c)
				*mapchar = '.';
			mapchar++;
		}
		maphead++;
	}
}
