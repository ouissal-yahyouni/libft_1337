/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouyahyou <ouyahyou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:33:16 by ouyahyou          #+#    #+#             */
/*   Updated: 2026/10/18 13:49:02 by ouyahyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t l1;
	size_t l2;
	char join_str;
	size_t total_len;
	size_t i;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	total_len = l1 + l2 + 1;

	if (!(join_str = malloc(total_len)))
		return (NULL);
	i = 0;
	while (s1[i] && i < total_len)
	{
		join_str[i] = s1[i];
		i++;
	}
	while (s2[i] && i < total_len)
	{
		join_str[i] = s2[i];
		i++;
	}
	join_str[i] = '\0';
	return (join_str);
}