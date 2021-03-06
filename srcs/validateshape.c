/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validateshape.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:43:09 by mkok              #+#    #+#             */
/*   Updated: 2017/02/10 01:34:47 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		validateshape(char *tetro)
{
	int		contact;
	int		i;

	i = 0;
	contact = 0;
	while (tetro[i])
	{
		if (tetro[i] == '#')
		{
			if (i / 5 > 0)
				contact = tetro[i - 5] == '#' ? contact + 1 : contact + 0;
			if (i / 5 < 4)
				contact = tetro[i + 5] == '#' ? contact + 1 : contact + 0;
			if (i % 5 > 0)
				contact = tetro[i - 1] == '#' ? contact + 1 : contact + 0;
			if (i % 5 < 4)
				contact = tetro[i + 1] == '#' ? contact + 1 : contact + 0;
		}
		i++;
	}
	if (contact == 6 || contact == 8)
		return (1);
	else
		return (0);
}
