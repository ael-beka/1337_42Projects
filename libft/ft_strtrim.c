/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:30:51 by ael-beka          #+#    #+#             */
/*   Updated: 2021/12/04 19:23:18 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_begin(const char *str, const char *set)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		if (ft_strchr (set, str[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	ft_end(const char *str, const char *set)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		if (ft_strchr(set, str[size - i - 1]) == 0)
			break ;
		i++;
	}
	return (size - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*cpy;
	int				begin;
	int				end;
	int				size;

	if (s1 == NULL)
		return (0);
	begin = ft_begin(s1, set);
	end = ft_end(s1, set);
	if (begin >= end)
		return (ft_strdup(""));
	size = end - begin;
	cpy = malloc(size + 1);
	if (cpy == NULL)
		return (NULL);
	ft_strlcpy(cpy, s1 + begin, end - begin + 1);
	return (cpy);
}

// int main()
// {
// 	char const s1[] ="amine ";
// 	char const set[] = "a";
// 	printf("%s\n",ft_strtrim(s1, set));
// }
