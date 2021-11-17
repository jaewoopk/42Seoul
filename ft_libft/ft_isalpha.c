int	ft_isalpha(int ch);

int	ft_isalpha(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else if (ch >= 'a' && ch <= 'z')
		return (2);
	return (0);
}
