/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:42:06 by ael-beka          #+#    #+#             */
/*   Updated: 2021/11/28 20:53:11 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_s;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start >= len)
		sub_s = malloc(len + 1);
	else
		sub_s = malloc((ft_strlen(s) - start) + 1);
	if (sub_s == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		sub_s[i] = s[start];
		start++;
		i++;
	}	
	sub_s[i] = '\0';
	return (sub_s);
}
