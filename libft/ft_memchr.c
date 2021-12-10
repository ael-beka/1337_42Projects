/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:54:39 by ael-beka          #+#    #+#             */
/*   Updated: 2021/11/22 14:04:17 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (0);
}
/*
 int main(void)
 {
	 unsigned char str[20] = "hello";
	 unsigned char str1[20] = "hello";
	 int	size = 12;
	 printf ("%s\n",ft_memchr(str, '\0', size));
	 printf ("%s\n",memchr(str1, '\0', size));
 }
 */