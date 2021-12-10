/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 01:20:01 by ael-beka          #+#    #+#             */
/*   Updated: 2021/12/10 02:48:45 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	count_words(const char *str, char deli)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (str[i] && str[i] == deli)
			i++;
		if (str[i])
			words++;
		while (str[i] && str[i] != deli)
			i++;
	}
	return (words);
}

static char	*fill_words(const char *str, int start, int finish)
{
	char			*word;
	int				i;

	i = 0;
	word = malloc((finish - start) + 1);
	while (start < finish)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word [i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	int			index;
	size_t		i;
	size_t		j;

	if (s == NULL)
		return (0);
	i = -1;
	j = 0;
	index = -1;
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = fill_words(s, index, i);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}

int	main()
{
	char	str[] = "                    1337";
	char	c = ' ';
	char	**s;

	s = ft_split(str, c);
	printf("%s\n", *s);
}
