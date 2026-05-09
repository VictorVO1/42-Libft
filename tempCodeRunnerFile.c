char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	o;

	o = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == o)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}