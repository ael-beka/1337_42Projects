/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:26:46 by ael-beka          #+#    #+#             */
/*   Updated: 2021/12/08 03:26:51 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	const char	*s_src;
	char		*s_dst;

	s_src = (const char *)src;
	s_dst = (char *)dest;
	i = 0;
	if (dest == '\0' && src == '\0')
		return (0);
	if (s_src < s_dst)
	{
		while (++i <= len)
		{
			s_dst[len - i] = s_src[len - i];
		}
	}
	else
	{
		while (len-- > 0)
		{
			s_dst[i] = s_src[i];
			i++;
		}
	}
	return (dest);
}
