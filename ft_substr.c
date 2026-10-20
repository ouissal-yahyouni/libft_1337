/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouyahyou <ouyahyou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:30:40 by ouyahyou          #+#    #+#             */
/*   Updated: 2026/10/20 09:43:38 by ouyahyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	size_t j;
	char *sub_str;

	// if (!s)
	// 	return (NULL);
	if (start >= ft_strlen(s))
	{
		sub_str = malloc(1);
		if (!sub_str)
			return (NULL);
		sub_str[0] = '\0';
		return (sub_str);
	}
	sub_str = malloc(len + 1);
	if (!sub_str)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
	{
		sub_str[j] = s[i];
		i++;
		j++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}