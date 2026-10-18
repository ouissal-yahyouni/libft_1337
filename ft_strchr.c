/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouyahyou <ouyahyou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:07:04 by ouyahyou          #+#    #+#             */
/*   Updated: 2026/10/17 16:38:10 by ouyahyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*first_occ;

	i = 0;
	if ((char)c == '\0')
	{
		while (s[i])
			i++;
		first_occ = (char *)&s[i];
	}
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			first_occ = (char *)&s[i];
			return (first_occ);
		}
		i++;
	}
	return (first_occ);
}
