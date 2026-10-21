/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouyahyou <ouyahyou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:48:03 by ouyahyou          #+#    #+#             */
/*   Updated: 2026/10/20 16:36:57 by ouyahyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
nt	count_words(char const *s, char c)
{
	int	i;
	int	count_words;

	i = 0;
	count_words = 0;
	while (s[i])
	{
		if (s[i] == c)
			count_words++;
		i++;
	}
	return (count_words);
}

size_t	count_words_len(char const *s, int start, char c)
{
	size_t	len;

	len = 0;
	while (s[start] && s[start] != c)
	{
		len++;
		start++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**argv;
	int		i;
	int		j;
	size_t	len;
	int		count_w;

	count_w = count_words(s, c);
	argv = malloc(sizeof(char *) * (count_w + 1));
	if (!argv)
		return (NULL);
	j = 0;
	i = 0;
	while (j < count_w)
	{
		
		len += count_words_len(s, i, c)
		argv[j] = malloc(sizeof(char) * len + 1);
		j++;
	}
}
