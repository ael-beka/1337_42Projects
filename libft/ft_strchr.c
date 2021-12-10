/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:11:31 by ael-beka          #+#    #+#             */
/*   Updated: 2021/12/08 03:32:48 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0' && str[i] != (unsigned char)c)
		i++;
	if (str[i] == (unsigned char)c)
		return (str + i);
	else
		return (0);
}

// int	main()
// {
// 	const char	s[20] = "fgh";
// 	const char	s1[20] = "fghHello";
// 	printf("%s\n",ft_strchr(s, 'l'));
// 	printf("%s\n",strchr(s1, 'l'));
// 	return (0);
// }