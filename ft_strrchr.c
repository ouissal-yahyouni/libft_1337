/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouyahyou <ouyahyou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:57:14 by ouyahyou          #+#    #+#             */
/*   Updated: 2026/10/15 21:38:05 by ouyahyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occ;

	last_occ = NULL;
	if ((char)c == '\0')
	{
		i = 0;
		while (s[i])
			i++;
		last_occ = ((char *)&s[i]);
	}
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			last_occ = (char *)&s[i];
		i++;
	}
	return (last_occ);
}
