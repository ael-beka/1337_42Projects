/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:46:58 by ael-beka          #+#    #+#             */
/*   Updated: 2021/11/29 15:49:08 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	i = ft_strlen(s);
	while (i > 0 && str[i] != (unsigned char)c)
		i--;
	if (str[i] == (unsigned char)c)
		return (str + i);
	else
		return (0);
}

// int	main()
// {
// 	const char str[]= "Aslfasse";
// 	printf("%s\n",ft_strrchr(str, 'a'));
// 	printf("%s\n",strrchr(str, 'a'));     
// }
