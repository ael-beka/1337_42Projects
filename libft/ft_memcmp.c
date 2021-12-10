/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:14:53 by ael-beka          #+#    #+#             */
/*   Updated: 2021/11/22 14:05:25 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_s1;
	unsigned char	*s_s2;
	size_t			i;

	s_s1 = (unsigned char *)s1;
	s_s2 = (unsigned char *)s2;
	i = 0;
	if (s_s1 == '\0' && s_s2 == '\0')
		return (0);
	while (i < n)
	{
		if (s_s1[i] < s_s2[i])
			return (s_s1[i] - s_s2[i]);
		if (s_s1[i] > s_s2[i])
			return (s_s1[i] - s_s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned char	s1[10] = "";
	unsigned char	s2[10] = "";
	unsigned char	s3[10] = "";
	unsigned char	s4[10] = "";
	printf ("%d\n", ft_memcmp(s1, s2, 0));
	printf ("%d\n", memcmp(s3, s4, 0));
	return (0);
}
*/