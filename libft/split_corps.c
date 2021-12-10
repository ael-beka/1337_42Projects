char	**ft_split(char const *s, char c)
{
	char	**str;
	int		size;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	size = ft_count_str(s, c);
	str = (char **)malloc(sizeof(char *) * (size + 1));
	i = -1;
	if (!str)
		return (NULL);
	while (++i < size)
	{
		while (*s == c)
			s++;
		len = ft_lent(s, c);
		str[i] = (char *)malloc(len + 1);
		if (!str[i])
			return (NULL);
		ft_strlcpy(str[i], s, len + 1);
		s += len;
	}
	str[i] = 0;
	return (str);
}
