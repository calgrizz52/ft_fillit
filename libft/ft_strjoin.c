/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 09:48:05 by mkok              #+#    #+#             */
/*   Updated: 2016/12/09 21:55:36 by mkok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		count;

	count = 0;
	str = NULL;
	if (s1 == NULL || s2 == NULL)
		return (str);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (str);
	while (*s1)
	{
		*str++ = *s1++;
		count++;
	}
	while (*s2)
	{
		*str++ = *s2++;
		count++;
	}
	*str = '\0';
	return (str - count);
}
