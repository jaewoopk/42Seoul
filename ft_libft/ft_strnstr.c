char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*tmp1;
	char		*tmp2;

	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack && len)
	{
		tmp1 = haystack;
		tmp2 = needle;
		while (*tmp1 == *tmp2)
		{
			tmp1++;
			tmp2++;
		}
		if (tmp2 == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
