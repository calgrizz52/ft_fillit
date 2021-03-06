/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trimtetro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalaues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 02:18:52 by ssalaues          #+#    #+#             */
/*   Updated: 2017/02/10 01:36:07 by ssalaues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			countlines(char **tetro)
{
	int		c;
	char	**t;

	c = 0;
	t = tetro;
	while (*t)
	{
		t++;
		c++;
	}
	return (c);
}

static char	**femptyline(char **tetro, int x)
{
	int		y;
	size_t	i;

	y = 0;
	i = 0;
	while (tetro[x][y] != 0)
	{
		if (!(ft_isalpha(tetro[x][y])))
			i++;
		y++;
	}
	if (i == ft_strlen(*tetro))
		tetro++;
	return (tetro);
}

static void	ytrim(char **tetro)
{
	int		x;
	int		c;
	char	**s;

	x = 0;
	c = 1;
	s = tetro;
	while (tetro[x][0] < 64 && x < countlines(tetro) - 1)
	{
		c++;
		x++;
	}
	if (c == countlines(tetro) && countlines(tetro) > 1)
	{
		x = 0;
		while (c > 0)
		{
			(s[x])++;
			c--;
			x++;
		}
	}
}

static int	ycheck(char **tetro)
{
	int		c;
	char	**t;

	c = 0;
	t = tetro;
	while (*t)
	{
		if (**t == '.')
			c++;
		t++;
	}
	if (c == countlines(tetro))
		return (1);
	return (0);
}

char		**trimtetro(char **tetro)
{
	int		x;

	x = 0;
	while (x < 3)
	{
		tetro = femptyline(tetro, 0);
		x++;
	}
	x = 0;
	while (x < 3)
	{
		if (ycheck(tetro))
			ytrim(tetro);
		x++;
	}
	return (tetro);
}
