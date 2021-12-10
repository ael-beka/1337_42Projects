/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:14:19 by ael-beka          #+#    #+#             */
/*   Updated: 2021/11/26 21:26:22 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	char	*s_dest;
	char	*cast;
	size_t	len;

	cast = (char *)s1;
	len = ft_strlen(cast);
	dest = (char *)malloc((len + 1) * sizeof(char));
	s_dest = dest;
	if (s_dest == 0)
		return (0);
	while (*cast != '\0')
	{
		*s_dest = *cast;
		cast++;
		s_dest++;
	}
	*s_dest = '\0';
	return (dest);
}
