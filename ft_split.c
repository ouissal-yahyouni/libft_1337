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


int count_words(char const *s , char c)
{
    int i;
    int count_words;
    
    i = 0;
    count_words = 0;
    while(s[i])
    {
        if(s[i] == c)
            count_words++;
        i++;
    }
    return count_words;
}
size_t count_words_len(char const *s , int start)
{
    size_t len ;
    while(s[start])
    {
        if(s[start] != c)
            len++;
        start++;
    }
    return len;
}
char **ft_split(char const *s, char c)
{
    char **str;
    int i;
    int j;
    int start;
    int count_w = count_words(s , c);
    str = malloc((char *) * count_w);
    if(!str)
        return NULL;
    j = 0;
    i = 0;
  
    
    
}

